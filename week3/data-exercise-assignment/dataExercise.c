#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int main() { 
    char charvar;
    
    int shortvar = SHRT_MAX;
    
    double infinity = HUGE_VAL;
    
    char i1;
    int i2;
    char i3;
    float i4;

    char i5;
    float i6;
    int i7; 
    char i8;

    int i9;

    float i10;

    printf("Program: dataExercise.c\nAuthor: Dave Houston\n");

    charvar = 'a';

    printf("%c\n", charvar);
    printf("%d\n", charvar);
    printf("%d\n", shortvar);
    printf("%f\n", infinity);

    printf("Enter the following: char int char float: ");
    scanf("%c %d %c %f%*c", &i1, &i2, &i3, &i4);
    printf("You entered: '%c' %d '%c' %f\n", i1, i2, i3, i4);
   
    printf("Now enter: char float int char: ");
    scanf("%c %f %d %c%*c", &i5, &i6, &i7, &i8 );
    printf("You entered: '%c' %f %d '%c'\n", i5, i6, i7, i8);

    printf("Give me an integer: ");
    scanf("%d%*c", &i9);
    printf("%015d\n", i9);

    printf("Now give me a float: ");
    scanf("%f%*c", &i10);
    printf("%15.2f", i10);

   return 0;
}
