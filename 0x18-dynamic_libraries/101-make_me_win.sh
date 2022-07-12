#!/bin/bash
gcc *.o -fpic -shared -o libruin.so
LD_PRELOAD=$PWD/librun.so
