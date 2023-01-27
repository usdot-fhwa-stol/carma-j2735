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

STARTING_TEST_MESSAGE=00
REPLACE_UP_TO_TEST_MESSAGE=07

STARTING_REPLACEMENT_LINE=$(grep -n "TestMessage${STARTING_TEST_MESSAGE} ::=" asn/sae/*.asn | cut -d: -f1)
REPLACE_UP_TO_REPLACEMENT_LINE=$(grep -n "TestMessage${REPLACE_UP_TO_TEST_MESSAGE} ::=" asn/sae/*.asn | cut -d: -f1)
REPLACE_UP_TO_REPLACEMENT_LINE=$(expr ${REPLACE_UP_TO_REPLACEMENT_LINE} - 1)
INSERTION_REPLACEMENT_LINE=$(expr ${STARTING_REPLACEMENT_LINE} - 1)

echo "Replacing lines ${STARTING_REPLACEMENT_LINE} to ${REPLACE_UP_TO_REPLACEMENT_LINE} in SAE J2735"
sed "${STARTING_REPLACEMENT_LINE},${REPLACE_UP_TO_REPLACEMENT_LINE}d" asn/sae/*.asn | sed -e "${INSERTION_REPLACEMENT_LINE}r asn/carma_j2735.asn" > output/carma_complete_j2735.asn

pushd output

# create the source and header files
asn1c -pdu=MessageFrame -fcompound-names -gen-PER ***.asn
echo "Removing example files"
rm *example*

popd
cp output/*.h include
cp output/*.c src
