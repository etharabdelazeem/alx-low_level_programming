#!/bin/bash
wget -P /tmp https://github.com/eyoul/alx-low_level_programming/raw/main/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=/tmp/make_me_win.so
