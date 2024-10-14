#!/bin/bash

set -ex

# combine the standard J2735 ASN file with the CARMA custom components
# piece
if [ ! -d asn/sae ]; then
    echo "Please provide the J2735 ASN files from SAE in a asn/sae directory"
    exit 1
fi
rm -rf output
mkdir -p output

# break up the CARMA ASN file based on the sections
CARMA_ASN_FILE=asn/carma_j2735.asn
OUTPUT_FILE=output/carma_complete_j2735.asn
awk '/START MAIN_REPLACEMENT/{ f = 1; next } /END MAIN_REPLACEMENT/{ f = 0 } f' ${CARMA_ASN_FILE} > output/main_replacement.txt
awk '/START REMOVE/{ f = 1; next } /END REMOVE/{ f = 0 } f' ${CARMA_ASN_FILE} > output/remove.txt
awk '/START APPEND/{ f = 1; next } /END APPEND/{ f = 0 } f' ${CARMA_ASN_FILE} > output/append.txt
awk '/START REGION_ADD/{ f = 1; next } /END REGION_ADD/{ f = 0 } f' ${CARMA_ASN_FILE} > output/region_add.txt
awk '/START REGION_DEFINITIONS/{ f = 1; next } /END REGION_DEFINITIONS/{ f = 0 } f' ${CARMA_ASN_FILE} > output/region_definitions.txt

# create the output file to start
cat asn/sae/*.asn > ${OUTPUT_FILE}

# do the removal
grep -Fvf output/remove.txt ${OUTPUT_FILE} > ${OUTPUT_FILE}.tmp
mv ${OUTPUT_FILE}.tmp ${OUTPUT_FILE}


# add in the region definitions
sed -i "/REGION DEFINITIONS AUTOMATIC TAGS::= BEGIN/ r output/region_definitions.txt" ${OUTPUT_FILE}

# do the main replacement of the test messages
STARTING_TEST_MESSAGE=00
REPLACE_UP_TO_TEST_MESSAGE=08

STARTING_REPLACEMENT_LINE=$(grep -n "TestMessage${STARTING_TEST_MESSAGE} ::=" ${OUTPUT_FILE} | cut -d: -f1)
REPLACE_UP_TO_REPLACEMENT_LINE=$(grep -n "TestMessage${REPLACE_UP_TO_TEST_MESSAGE} ::=" ${OUTPUT_FILE} | cut -d: -f1)
REPLACE_UP_TO_REPLACEMENT_LINE=$(expr ${REPLACE_UP_TO_REPLACEMENT_LINE} - 1)
INSERTION_REPLACEMENT_LINE=$(expr ${STARTING_REPLACEMENT_LINE} - 1)

echo "Replacing lines ${STARTING_REPLACEMENT_LINE} to ${REPLACE_UP_TO_REPLACEMENT_LINE} in SAE J2735"
sed "${STARTING_REPLACEMENT_LINE},${REPLACE_UP_TO_REPLACEMENT_LINE}d" ${OUTPUT_FILE} | sed -e "${INSERTION_REPLACEMENT_LINE}r output/main_replacement.txt" > ${OUTPUT_FILE}.tmp
mv ${OUTPUT_FILE}.tmp ${OUTPUT_FILE}

# do the appending, add newline to end of file just in case
echo >> ${OUTPUT_FILE}
cat output/append.txt >> ${OUTPUT_FILE}

# add in the region id
sed -i "/-- The values 128 and above are for local region use/ r output/region_add.txt" ${OUTPUT_FILE}

pushd output

# create the source and header files
asn1c -pdu=MessageFrame -fcompound-names -gen-PER -fincludes-quoted ***.asn
echo "Removing example files"
rm *example*

popd
mkdir -p include
cp output/*.h include
mkdir -p src
cp output/*.c src
