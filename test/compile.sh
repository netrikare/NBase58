#put libNBase58.so in ../ directory, add linker options to look for the lib in ../ dir while running the program
gcc tester.c -I../src -Wl,-R../ -L../ -lNBase58 -o tester
