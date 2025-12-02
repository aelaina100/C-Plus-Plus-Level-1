
#include <iostream>
using namespace std;

/* Global Variables.
   Examine the below code:
*/

// Defining a global variable — it can be read and/or modified by ANY function or procedure in the program.
int x = 300; int x = 300; // Program execution begins by initializing this global variable (memory is allocated and x is set to 300).
// After all global variables are initialized, execution continues in main().


void MyFunction1() // Remember: a procedure or function stays "asleep" (not executed) until it is called.
{
    int x = 500;

    cout << "The local value of x inside function is: " << x << endl; // 500
}

int main() 
{
    int x = 10;  

    cout << "The local value of x inside main is: " << x << endl; // 10
    MyFunction1();

    cout << "The Global Variable of x is: " << ::x << endl;  // 300
    
    ::x++; //Updates the value stored at the global variable's memory address. Remember, it is  ::x = ::x + 1;   
    cout << "The modified Global Variable of x is: " << ::x << endl;  // 301
    
    ::x = 7000; // Direct assignment overwrites the global variable's value again
    cout << "The modified Global Variable of x is: " << ::x << endl;  // 7000

    return 0;
}

/* ============================ IMPORTANT CONCEPTS & TERMINOLOGIES ============================

    ▬▬▬ VARIABLE LIFECYCLE ▬▬▬

    1. LOCAL VARIABLES
       - A local variable is CREATED when the program ENTERS the scope where it is defined.
       - For variables inside a function (including main()), this means:
             ✔ Created when the function begins executing.
             ✔ Destroyed immediately when the function finishes executing.
       - "Destroyed" means the variable’s memory is released (its address becomes free for reuse).
       - Each call to a function creates *new* instances of its local variables, even if called repeatedly.


    2. GLOBAL VARIABLES
      - A global variable is created as soon as the program starts running.
        This occurs even *BEFORE main() begins execution*.
        Its value is stored in memory, assigned an identifier (the variable's name),
        and given a unique memory address (reference).

        
       - Its lifetime lasts for the entire duration of the program.
       - It is destroyed only when the whole program terminates.
       - Global variables live in a different memory region (usually the static storage area).


    ▬▬▬ SUMMARY ▬▬▬
        • Local variable → Exists only within its function’s scope; destroyed when function ends.
        • Global variable → Exists for the entire runtime of the program; destroyed at program exit.

============================================================================================== */





