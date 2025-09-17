/*

Program that will print hello 10 times.

*/

#include <stdio.h>

// Function prototype 1.

void printHello(void);
    
void main(void){
    printHello();
}

void printHello(void) {
    int i = 1;
    while (i <= 10) {
        puts("Hello");
        i = i + 1;
    }
}