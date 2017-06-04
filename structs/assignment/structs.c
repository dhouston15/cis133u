/* 
 * Name: Dave Houston
 * Assignment: Structs
 * Date Written: 2017-May-29
 * Course: CIS 133U
 * Program: structs.c
 * Purpose: This program will gather customer informaton then search collected data by a single field (state).
 * Sources: Just me
 */
#include <stdio.h>
#include <string.h>

// Define a customer
typedef struct {
    char firstName[30];
    char lastName[30];
    char street[35];
    char city[20];
    char state[3];
    int zip;
    char phone[15];
    int accountId;
} Customer;

// Function prototypes

// Collect input from the user about a customer.
Customer getCustomer(int custNum);

// Given a Customer, show us what it looks like.
void showCustomer(Customer c);

int main() { 
    char state[3];
    Customer custs[10];

    // Get customers from the user, put 'em in an array
    for(int i = 1; i <= 10; i++) { 
        custs[i-1] = getCustomer(i);
    }

    // Collect a state from the user
    printf("Enter a state: ");
    scanf("%s%*c", state);
    
    // Iterate over the struct looking for states that 
    // match our input.  
    for( int i = 0; i < 10; i++) {
        // using the n-version in an attempt to avoid something ugly.
        // Could use strcasecmp but that's non-portable.
        if( strncmp(state, custs[i].state, 2) == 0 ) { 
            showCustomer( custs[i] );
        } 
    }

    return 0;
}


Customer getCustomer(int custNum) { 
    Customer c;

    printf("Enter Data for customer %d\n", custNum);
    printf("Enter First Last Phone: ");
    scanf("%s %s %s%*c", c.firstName, c.lastName, c.phone);
    printf("Enter Address (Street City State ZIP): ");
    scanf("%s %s %s %d%*c", c.street, c.city, c.state, &c.zip);

    c.accountId = custNum;  // Presuming this is right; there's no clear alternative
    return c;
}

void showCustomer(Customer c) { 
    printf("Data for Customer %d\n", c.accountId);
    printf("Account: %d\n", c.accountId);
    printf("Name: %s %s\n", c.firstName, c.lastName);
    printf("Addr: %s %s %s %d\n", c.street, c.city, c.state, c.zip);
    printf("Phone: %s\n", c.phone);
    printf("\n");
}
