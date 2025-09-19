#include <stdio.h> // printf
#include <stdlib.h> // srand, rand
#include <time.h> // time

// Function prototype
void printRandom(int n);

int main(void) {
    // Call srand function
    srand(time(0));

    // Function call
    printRandom(10);
    return 0;
}

// Function definition (implementation)
void printRandom(int n) {
    int i = 0;
    while (i < n) {
        // [5, 13]
        printf("%d\n", rand() % (13 - 5 + 1) + 5);
        i = i + 1;
    }
}