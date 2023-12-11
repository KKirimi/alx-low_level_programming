#!/bin/bash
wget -P /tmp https://github.com/KKirimi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/.so
export LD_PRELOAD=/tmp/.so
