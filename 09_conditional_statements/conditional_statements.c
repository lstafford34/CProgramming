/*
    Conditional statements

    && - logical AND    (logical negation)
    || - logical OR     (logical conjunction)
    ! - logical NOT     (logical disjunction)
*/

#include <stdio.h>

int main(void) {
    int x = 0;
    scanf("%d", &x);

    if (x > 0 && x < 100 || x % 2 == 0) {
        printf("%d\n", x);
    }
    return 0;
