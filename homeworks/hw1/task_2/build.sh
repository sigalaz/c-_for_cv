echo "Building task_2 manually"

echo "Compilling libipb_arithmetic library"

c++ -std=c++17 -c src/sum.cpp      -I ./include/ -o build/sum.o
c++ -std=c++17 -c src/subtract.cpp -I ./include/ -o build/subtract.o

ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o

echo "compiling main"
c++ -std=c++17 src/main.cpp -I ./include/ -L -l build/libipb_arithmetic.a -o results/bin/lib_manual_build
