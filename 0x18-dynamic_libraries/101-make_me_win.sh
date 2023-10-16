#!/bin/bash
wget -P /tmp https://github.com/etharabdelazeem/alx-low_level_programming/tree/main/0x18-dynamic_libraries/Make_me_win.so
export LD_PRELOAD=/tmp/Make_me_win.so
