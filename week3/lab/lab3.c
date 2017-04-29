/*                                                                                */
/*  Name:         Dave Houston                                                   */
/*  Assignment:   LAB 3                                                          */
/*  Date Written: 2017-April-22                                                     */
/*  Course:       CS133, Spring 2017                                              */
/*  Program:      lab3.c                                                     */
/*  Purpose:      This program collects some input and formats it according        */
/*                the requires in the Lab 3 document                               */
/*  Sources:      Me, Textbook, man pages */
#include <stdio.h>
#include <stdlib.h>

void part1();
void part2();


int main() { 

    // Broken into functions so you can comment them out
    // if needed.
    printf("Part 1\n\n");
    part1();
    printf("Part 2\n\n");
    part2();
    return 0;
}

void part1() { 
    float line1;
    char line2;
    int line3;
    char line4;

    printf("Enter four lines: a float, a char, a 4-digit int, and a char:\n");
    scanf("%f%*c", &line1);
    scanf("%c%*c", &line2);
    scanf("%4d%*c", &line3);
    scanf("%c%*c", &line4);
    printf("%4.2f %c %d %c",
            line1, 
            line2, 
            line3,
            line4);
}

void part2() { 
    int ac1, ac2, ac3, 
        npa1, npa2, npa3,
        nxx1, nxx2, nxx3, nxx4;

    int sum;
    printf("Enter a phone number in the format +1(XXX)XXX-XXXX\n");
    scanf("+1(%1d%1d%1d)%1d%1d%1d-%1d%1d%1d%1d%*c",
            &ac1, &ac2, &ac3,
            &npa1, &npa2, &npa3,
            &nxx1, &nxx2, &nxx3, &nxx4);

    sum = ac1 + ac2 + ac3 + 
          npa1 + npa2 + npa3 +
          nxx1 + nxx2 + nxx3 + nxx4;

    printf("sum is '%d'\n", sum);
    

}

