bash build_boot.sh
bash build_kernel.sh

cp bin/loader.bin ./os.img
cat src/openkernel/kernel >> os.img
