!/bin/bash
rm -rf ./build
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" ../
cmake --build ./
./class2