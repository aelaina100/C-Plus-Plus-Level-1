
#include <iostream>
using namespace std;

/* Variable Scope Homework:
* 
* Create a program that contains:
	-two global variables
	- A function
	- A main() function off course !

	and modify the values of the global and local variables,
	observing their lifecycle plus aspects similar to the previous scope examples 
	in earlier notes.
*/

// Solution: your job is now to only examine the program below and predict the output. The run the program.

/*  TWO GLOBAL VARIABLES  */
// Created BEFORE main() begins, stored in the global/static memory area.
int gCounter = 10;
float gBalance = 250.75;

/*  FUNCTION THAT MODIFIES BOTH GLOBAL AND LOCAL VARIABLES */
void ProcessTransaction()
{
    cout << "\n---- Inside ProcessTransaction() ----\n";

    // Local variable (created when entering this function)
    float transactionAmount = 50.25;

    cout << "Initial Local transactionAmount = " << transactionAmount
        << " | Address: " << &transactionAmount << endl;

    cout << "Global gCounter before change = " << gCounter
        << " | Address: " << &gCounter << endl;

    cout << "Global gBalance before change = " << gBalance
        << " | Address: " << &gBalance << endl;

    // Modify the local variable
    transactionAmount += 100;  // Only affects THIS scope

    // Modify global variables
    gCounter += 1;      // affects entire program
    gBalance -= 40.00;  // affects entire program

    cout << "\nAfter modifications INSIDE ProcessTransaction():\n";
    cout << "Local transactionAmount = " << transactionAmount << endl;
    cout << "Global gCounter = " << gCounter << endl;
    cout << "Global gBalance = " << gBalance << endl;

    // When this function ends → transactionAmount is destroyed.
}

/*  MAIN FUNCTION  */
int main()
{
    cout << "---- Inside main() ----\n";

    // Local variable of main()
    int gCounter = 999;
    // This shadows the global gCounter inside main()

    cout << "Local gCounter in main = " << gCounter
        << " | Address: " << &gCounter << endl;

    cout << "Global gBalance in main = " << ::gBalance
        << " | Address: " << &::gBalance << endl;

    cout << "\nCalling ProcessTransaction()...\n";
    ProcessTransaction();

    cout << "\n---- Back to main() ----\n";

    cout << "Local gCounter in main = " << gCounter << endl;
    cout << "Global gCounter (actual) = " << ::gCounter << endl;
    cout << "Global gBalance (actual) = " << ::gBalance << endl;

    return 0;
}



