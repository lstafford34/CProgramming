#include <stdio.h>

void printCountdown(void);

void main(void){
    printCountdown();
}

void printCountdown(void){
    int C = 10
    ;while (C > 0){
        ;printf("%d\n", C);
        C = C - 1;
        if (C == 0){
            printf("Countdown complete.\n");
        }
    }
}