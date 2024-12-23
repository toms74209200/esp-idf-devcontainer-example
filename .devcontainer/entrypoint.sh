#!/bin/bash

set -e

python3 /opt/esp-idf/tools/idf_tools.py install-python-env
python3 /opt/esp-idf/tools/idf_tools.py install
source /opt/esp-idf/export.sh