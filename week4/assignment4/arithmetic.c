#include <stdio.h>
#include <math.h>

int main() { 
    double pi = (double)22 / (double)7;  // Better than 3.14!
    unsigned short int usi_val;
    float f_val;
    int numerator, denominator;

    printf("Give me an unsigned short int: ");
    scanf("%hu%*c", &usi_val);

    // long, long, long, long, long, double?  This seems like it's 
    // not right, but pow() doesn't like long long. 
    long long powered = (long long)pow( (double)2, (double)usi_val);
    printf("2 ^ %hu is %lli\n", usi_val, powered);     

    printf("Give me an short unsigned int, it'll be a radius: ");
    scanf("%hu%*c", &usi_val);

    printf("Circumfrence is %f\n", (double)((double)2.0 * pi * (double)usi_val)); 
    printf("Area is %f\n", (double)(pi * pow(usi_val, 2)));
    
    printf("Give me a float, it will be x in  2x3 + 3x2 + 4x + 5: ");
    scanf("%f%*c", &f_val);

    // Break this up for clarity
    printf("Result: %f\n", 
        (float)(
            (float)2 * pow(f_val, (float)3) + 
            (float)3 * pow(f_val, (float)2) + 
            (float)4 * f_val +
            (float)5
            )
          );
    
    printf("Give me two comma-seperated integers like a, b: ");
    scanf("%d, %d%*c", &numerator, &denominator);
    printf("Remainder of division is: %d\n", numerator % denominator);

    return 0;
}
