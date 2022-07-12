#!/bin/bash
gcc *.o -fpic -shared -o librun.so
LD_PRELOAD=$PWD/librun.so
