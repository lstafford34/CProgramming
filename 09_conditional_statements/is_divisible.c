#include <stdio.h>
#include <stdbool.h>

/*
    Returns true if first is divisible by second AND by (second - 3)
*/
bool is_divisible_both(int first, int second);
bool is_correct_input(int first, int second);

int main(void) {
    puts("Enter x and y");
    int x = 0;
    scanf("%d", &x);
    int y = 0;
    scanf("%d", &y);
    if (is_correct_input(x,y)) {
        printf("%d\n", is_divisible_both(x, y));
    }
    else {
        puts("Incorrect input");
    }
   
    return 0;
}


bool is_divisible_both(int first, int second) {
    return first % second == 0 && first % (second - 3) == 0;
}

bool is_correct_input(int first, int second) {
    return !(second == 0 || second == 3);
}