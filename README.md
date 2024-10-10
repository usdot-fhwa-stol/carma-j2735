The CARMA J2735 library provides enocoding and decoding of messages specified by [SAE J2735](https://www.sae.org/standards/content/j2735set_201603/) along with the CARMA created messages using in Cooperative Driving Automation (CDA).

# CI Status

These badges are for the default branch only.

[![Build Workflow](https://github.com/usdot-fhwa-stol/snmp-client/actions/workflows/build.yml/badge.svg)](https://github.com/usdot-fhwa-stol/snmp-client/actions/workflows/build.yml)

[![Sonar Workflow](https://github.com/usdot-fhwa-stol/snmp-client/actions/workflows/sonar-scanner.yml/badge.svg)](https://github.com/usdot-fhwa-stol/snmp-client/actions/workflows/sonar-scanner.yml)

## Usage

* Ensure you have the CARMA apt repository in your list.
* Run: ```apt-get install carma-j2735-<soversion>```

## Building

In order to build this library manually you will need to obtain a copy of the SAE J2735 201603 ASN file and place it in a folder at asn/sae inside the project.  The CI build pulls this file from a private CARMA repository using a deploy key to access the file.

## Contact
Please click on the CARMA logo below to visit the Federal Highway Adminstration(FHWA) CARMA website. For more information, contact CAVSupportServices@dot.gov.

[![CARMA Image](https://raw.githubusercontent.com/usdot-fhwa-stol/CARMAPlatform/develop/docs/image/CARMA_icon.png)](https://highways.dot.gov/research/research-programs/operations/CARMA)
