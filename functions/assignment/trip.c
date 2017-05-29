#include <stdio.h>
#include <string.h>
/* 
 * Name: Dave Houston
 * Assignment: Functions
 * Date Written: 2017-May-26
 * Course: CIS 133U
 * Program: trip.c
 * Purpose: This program will calculate your mpg and trip cost based on some input. 
 * Sources: Just me
 */


/* Function prototypes */

// Displays a string prompt, accepts a float, and returns it.
float promptAndGetFloat(char *prompt);

// Displays the good bye message
void showGoodBye();

// Displays a provided message w/ a newline
void showMessage(char *message);

// Shows a rule of '=' characters width chars long.  Optionally includes a newline.
void showRule(int width, int newLine);

// Shows a = rule width characters lone, with a string centered in the middle.
void showRuleWithMessage(int width, char *message);

// Shows the trip summary
void showSummary(float fuel, float minCost, float maxCost, float travelMiles);

// Displays the welcome message
void welcomeMessage();

int main() { 
    float fuel = 0;
    float minCost = 0;
    float maxCost = 0;
    float travelMiles = 0;

    do {    // Iterate at least once, everyone gets one go.
        
        fuel = promptAndGetFloat("Please input your car's average miles per gallon (enter 0 to quit)");
        
        if( fuel == 0 ) {   // Catch if they enter 0
            showGoodBye();
            return 0;
        }

        showMessage("Please tell me the range of fuel costs you expect to pay (per gallon).");
        minCost = promptAndGetFloat("The lowest per gallon cost of fuel is");
        maxCost = promptAndGetFloat("The highest per gallon cost of fuel is");
        travelMiles = promptAndGetFloat("Please tell me how many miles you plan to travel");

        showSummary(fuel, minCost, maxCost, travelMiles);

    } while( fuel != 0 );    // Bail out here too just in case something weird happens.

    return 0;
}

float promptAndGetFloat(char *prompt) { 
    float retval;
    
    printf("%s >>", prompt);
    scanf("%f%*c", &retval);
    printf("\n");       // Ensure a newline to keep it clean
    
    return retval;
}

void showGoodBye() { 
    printf("Thank you, please drive safely and have a nice trip!\n");
}

void showMessage(char *message) { 
    printf("%s\n", message);
}

void showRule(int width, int newLine) {
    for( int i = 0; i <= width; i++ ) { 
        printf("=");
    }
    
    if( newLine ) { 
        printf("\n");
    }
}

void showRuleWithMessage(int width, char *message) { 
    int messageLength = strlen(message);
    int barLength = 0;
    
    if( messageLength >= width ) { 
        printf("%s\n", message);
        return;
    }

    barLength = (width - (messageLength +2)) / 2;   // Half bar + 2 padding around message
    
    showRule( barLength, 0 );
    printf(" %s ", message);
    showRule( barLength, 1 );
}

void showSummary(float fuel, float minCost, float maxCost, float travelMiles) { 
    float fuelRequired;
    float minPrice;
    float maxPrice;

    fuelRequired = travelMiles / fuel;
    minPrice = fuelRequired * minCost;
    maxPrice = fuelRequired * maxCost;

    showRuleWithMessage(60, "Trip Summary");

    printf("You will need to purchase %2.2f gallons of fuel\n", fuelRequired);
    printf("The approximate cost of fuel for your trip is between $%0.2f and $%0.2f.\n", minPrice, maxPrice);

    showRuleWithMessage(60, "End Trip Summary");
}

void welcomeMessage() { 
    printf("Welcome to the Trip Planner!\n");
    printf("So are you ready to take a trip?  Let me help you plan for\n");
    printf("your fiel costs and required stops to fill your tank\n");
    
    showRule(60, 1);
    
    printf("Please provide answers to the prompts below and I will\n");
    printf("display a summary for you when I have computed the results.\n");
    
    showRule(60, 1);
}
