// file: FizzBuzz_NoArgs.c
//
// author: Josh Grant 2016
//
// FizzBuzz in C (C99), for 1-100.

#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i <= 100; i++) {
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