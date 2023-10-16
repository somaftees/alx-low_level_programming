#!/bin/bash
wget -P /tmp https://github.com/somaftees//alx-low_level_programming/raw/main/0x18-dynamic_libraries/my_library.so
export LD_PRELOAD=/tmp/my_library.so
