#!/bin/bash

set -ex

${CARMA_OPT_DIR}/scripts/install_dependencies_script.sh -c CMakeLists.txt automake libtool flex git bison
