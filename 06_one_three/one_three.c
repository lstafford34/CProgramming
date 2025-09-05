 /*
    Practice with void functions.

*/

#include <stdio.h>

// Function prototypes - short description of a function
void two(void);
void one_three(void);

int main(void) {
    puts("starting now");
    one_three();
    puts("done!");
    return 0;
}

// Function implementations
void two(void) {
    puts("two");
    
}

void one_three(void) {
    puts("one");
    two();
    puts("three");
}