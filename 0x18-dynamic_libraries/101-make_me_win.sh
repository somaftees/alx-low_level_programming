#!/bin/bash
wget -P /tmp "https://github.com/somaftees/alx-low_level_programming/raw/master/0x18-dynamic_libraries/my_libr.so"
export LD_PRELOAD=/tmp/my_libr.so:$LD_PRELOAD
