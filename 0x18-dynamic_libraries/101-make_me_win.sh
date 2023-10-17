#!/bin/bash
wget -P ../ https://github.com/somaftees/alx-low_level_programming/raw/main/0x18-dynamic_libraries/my_libr.so
export LD_PRELOAD=../my_libr.so
