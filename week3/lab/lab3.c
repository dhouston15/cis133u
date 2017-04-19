#include <stdio.h>
#include <stdlib.h>

int main() { 
    float line1;
    char line2;
    int line3;
    char line4;

    scanf("%f%*c", &line1);
    scanf("%c%*c", &line2);
    scanf("%d%*c", &line3);
    scanf("%c%*c", &line4);
    printf("%4.2f %c %4d %c", line1, line2, line3, line4);

    return 0;
}
