#include <stdio.h>
#include <math.h>

int main() { 
    long x;
    long result;

    printf("y = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - x\n");
    printf("Please enter a value for x: ");
    scanf("%ld", &x);
    result = 3 * powl(x, 5) + 2 * powl(x, 4) - 5 * powl(x, 3) - powl(x, 2) + 7 * x - x;
    printf("Result: %ld", result);

    return 0;
}

