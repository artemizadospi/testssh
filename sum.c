#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(void) {
    int a = 5;
    int b = 5;
    printf("The sum of a and b is %d\n", sum(a, b));

    return 0;
}