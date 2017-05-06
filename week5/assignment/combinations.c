/* 
 * Name: Dave Houston
 * Assignment: Condition and Loops
 * Date Written: 2017-May-6
 * Course: CIS 133U
 * Program: combinations.c
 * Purpose: This program will calculate the # of combinations giving n and k.
 * Sources: Just me
 */
#include <stdio.h>
#include <math.h>

long unsigned int fact(int input);

int main() { 
    int n = 0, tmp_n;           // Keep the tmp_* vars to make looping easier
    int k = 0, tmp_k;
    int difference = 0;
    unsigned long int n_fac, k_fac, diff_fac;

    // These two should be their own function, maybe.  
    do { 
        printf("Please provide an integer between 1 and 10: ");
        scanf("%d%*c", &tmp_n);
        if( tmp_n >= 1 && tmp_n <= 10 ) { 
            n = tmp_n;
        } else { 
            printf("%d is not between 1 and 10.  Try again.\n", tmp_n);
        }
    } while( n == 0 );

    do {
        printf("Pleae provide a number between 1 and %d: ", n);
        scanf("%d%*c", &tmp_k);
        if( tmp_k <= n && tmp_k >= 1 ) { 
            k = tmp_k;
        } else { 
            printf("%d is not between 1 and %d, try again.\n", tmp_k, n);
        }
    } while( k == 0 );

    difference = n - k;
    n_fac = fact( n );
    k_fac = fact( k );
    diff_fac = fact( difference );

    printf("Combinations: %li\n", (n_fac / (k_fac * diff_fac)));    // Is this doing the casting right?

    return 0;
}

// I dislike writing the same loop twice.  Figuring out 
// that I needed to predeclare the function up is probably
// something I should've read ahead about.  
unsigned long fact( int input ) { 
    int i;
    unsigned long int result = 1;
    if( input < 0 ) { 
        return 0; // Factorial of negatives is undefined, but let's pretend
                  // it's 0 for now.
    }

    for( i = 1; i <= input; i++ ) { 
        result = result * i;
    }

    return result;
}
