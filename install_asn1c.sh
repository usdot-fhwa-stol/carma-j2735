#!/bin/bash

set -ex

# installing asn1c from source as we need version 0.9.29 which is not released yet
mkdir /tmp/asn1c
cd /tmp/asn1c

git clone https://github.com/usdot-fhwa-stol/usdot-asn1c
cd usdot-asn1c

test -f configure || autoreconf -iv
./configure
make
make install
rm -rf /tmp/asn1c