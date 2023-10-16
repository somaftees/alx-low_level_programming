#!/bin/bash
wget -P /tmp https://github.com/somaftees/alx-low_level_programming/raw/master/0x18-dynamic_libraries/my_lib.so
export LD_PRELOAD=/tmp/my_lib.so
