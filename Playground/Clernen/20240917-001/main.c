// There are 2 ways you can have C functions in different files
// 1. Linking 2 C files together
// - Step 1: Declare an empty function in the main file (and make sure to call it in the code as well)
// - Step 2: Declare the same function in your function file, this time with the actual code
// - Step 3: Compile each files to .o (objects) by running "cc -c file.c -o file.o"
// - Step 4: Finally combine the .o files to the main program with "cc *.o -o finalfile"
// 2. Custom header files

#include <stdio.h>

void nana();

void main() {
    printf("Qiqi\n");
    nana();
}
