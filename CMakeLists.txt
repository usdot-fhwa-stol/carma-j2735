cmake_minimum_required(VERSION 3.10.2)

# where to find our CMake modules
set(CMAKE_MODULE_PATH "$ENV{CARMA_OPT_DIR}/cmake")

project(carma_asn1c
    DESCRIPTION "CARMA ASN1C encoding/decoding library"
	VERSION 0.1.2
)

add_library(${PROJECT_NAME} SHARED)

include(CommonSource)
include(InstallingGeneral)
include(InstallingConfigs)
include(Packing)