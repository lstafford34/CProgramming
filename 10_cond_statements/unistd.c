#include <stdio.h>
#include <unistd.h>

#include <stdio.h>
#include <unistd.h> // usleep function
#include <stdlib.h> // rand function
#include <time.h> // time function

// Prints HELLO 100 times
void printHello(void);
void printNHello(int n);

int main(void) {
    printNHello(26);
    
    return 0;
}

void printHello(void) {
    
    // Use an iteration statement (loop)
    // We need 3 things for the loop to work
    // 1 - counter (initialization) starting value
    // 2 - condition (when to stop iteration)
    // 3 - increment (change the counter variable)
    
    int i = 1; // counter
    while (i <= 100) {
        printf("%5d - HELLO!\n", i);
        usleep(30000);
        i = i + 1;
    }
}
void printNHello(int n) {
    while (n > 0) {
        printf("%3d - HELLO!\n", n);
        usleep(30000);
        n = n - 1;
    }
}
