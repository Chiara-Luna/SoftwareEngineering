mkdir build
cmake -S . -B build
cmake --build build 
ctest -C Debug --test-dir build
pause