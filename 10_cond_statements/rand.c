/*
Introduction to iteration statements (loops).
    While loop
*/

#include <stdio.h>
#include <unistd.h> // usleep function
#include <stdlib.h> // rand function
#include <time.h> // time function

// Prints HELLO 100 times
void printNRandom(int n);

int main(void) {
    printNRandom(10);
    
    return 0;
}

void printNRandom(int n) {
    while (n > 0) {
        printf("%d\n", rand() % 10);
        n = n - 1;
    }
}
