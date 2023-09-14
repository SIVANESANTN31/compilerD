#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int z = x + y;  // This calculation is used later, so it's not dead code

    if (x > 0) {
        printf("x is positive.\n");
    } else {
        printf("x is non-positive.\n");  // This block is necessary
    }

    // The following block of code is dead code as it's never reached
    if (y < 0) {
        printf("y is negative.\n");
    } else {
        printf("y is non-negative.\n");
    }

    printf("The sum of x and y is %d.\n", z);

    return 0;
}
