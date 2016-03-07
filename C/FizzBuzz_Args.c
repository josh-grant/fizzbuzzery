// file: FizzBuzz_Args.c
//
// author: Josh Grant 2016
//
// FizzBuzz in C (C99) with CL args for upper and lower values

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int lowerCap = atoi(argv[1]);
    int upperCap = atoi(argv[2]);
    for (int i = lowerCap; i <= upperCap; i++) {
        if (i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        }
        if (i % 3 == 0) {
            printf("Fizz");
        }
        if (i % 5 == 0) {
            printf("Buzz");
        }
        printf("\n");
    }
    return 0;
}