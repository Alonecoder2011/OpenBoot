#!/bin/bash

cd src/bootloader

nasm loader/boot.asm -o ../../bin/loader.bin

cd ../..
