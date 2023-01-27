#!/bin/bash

set -e

mkdir -p include
mkdir -p src
${CARMA_OPT_DIR}/scripts/build_script.sh -p $@
