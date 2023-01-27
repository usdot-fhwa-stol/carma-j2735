#!/bin/bash

set -ex

if [ ! -z "${BUILD_ARCHITECTURE}" ]; then
    PACKAGE_ARCHITECTURE=":${BUILD_ARCHITECTURE}"
fi

apt-get install -y automake libtool flex git
