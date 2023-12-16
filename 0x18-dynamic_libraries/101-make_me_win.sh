#!/bin/bash
wget -P /tmp https://github.com/kemuma200/alx-low_level_programming/raw/master/0x18-dynamic_libraries/champion.so 
export LD_PRELOAD=/tmp/champion.so
