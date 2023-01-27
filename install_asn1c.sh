#!/bin/bash

set -ex

# installing asn1c from source as we need version 0.9.29 which is not released yet
mkdir /tmp/asn1c
cd /tmp/asn1c

git clone https://github.com/vlm/asn1c.git
cd asn1c
git checkout 9925dbbda86b436896108439ea3e0a31280a6065

test -f configure || autoreconf -iv
./configure
make
make install
rm -rf /tmp/asn1c