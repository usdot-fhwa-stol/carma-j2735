cmake_minimum_required(VERSION 3.10.2)

# where to find our CMake modules
set(CMAKE_MODULE_PATH "$ENV{CARMA_OPT_DIR}/cmake")

project(carma_asn1c
    DESCRIPTION "CARMA ASN1C encoding/decoding library"
	VERSION 0.1.2
)

add_library(${PROJECT_NAME} SHARED)

set (CPACK_DEBIAN_PACKAGE_HOMEPAGE https://github.com/usdot-fhwa-stol/carma-j2735)

include(CommonSource)
include(InstallingGeneral)
include(InstallingConfigs)
include(Packing)