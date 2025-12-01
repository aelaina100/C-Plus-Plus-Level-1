#include <iostream>
using namespace std;

/*
    Variable Scope — Local vs Global Variables

    Let's begin by examining the following code:
*/

void MyFunction1()
{
    int x = 500;
    // This 'x' exists ONLY inside the curly braces of MyFunction1().
    // It is a LOCAL variable of this procedure.

    cout << "The value of x inside function is: " << x << endl;
}

int main()
{
    int x = 10;
    // This 'x' exists ONLY inside main().
    // It has NOTHING to do with the x inside MyFunction1().
    // It is a LOCAL variable of this function.

    cout << "The local value of x inside main is: " << x << endl;

    MyFunction1();

    return 0;
}

/*
    IMPORTANT NOTES ABOUT VARIABLES IN MEMORY:

   Every variable created in memory always has 3 properties:
       1. A Name                     (such as x)
       2. A Value                    (such as 85)
       3. A Memory Address (reference) in Hex    (such as 0x00007ffe...)

    Because variables have **scope**, C++ allows you to create more than
    one variable with the exact same name — AS LONG AS they exist in
    different scopes, where each variable will have a UNIQUE memory address.

    Example:
        - x in main()   → has its own reference (memory address). 
        - x in MyFunction1() → has its own refrence (memory address).

    Even though they share the same NAME ("x"), they are treated as
    completely separate variables in memory.

    Scope determines:
       ✔ Where a variable can be accessed
       ✔ When it is created  (lifetime begins)
       ✔ When it is destroyed  (lifetime ends)

*/


/*
                   🔹 Mental Model — “Each Function Has Its Own Room”

    Think of each function as a private room.

    Inside each room there can be a variable called x.

    Even if you use the same name:

    The x inside the room “main()” is a different object

    The x inside the room “MyFunction1()” is a different object

    They cannot see each other.
    They cannot access each other.
    They do not interfere with each other.

    They just happen to have the same spelling.


                            🧠 Memory-Level Understanding

    When the program runs:

    main() starts → C++ allocates memory for x = 10

    Then MyFunction1() is called → C++ allocates a new x = 500

    Each x has:

    Variable Name	Memory Address (Hex)	Value	Scope
    x	0x7ff…	10	main()
    x	0x7ff…	500	MyFunction1()

    ✔ Same NAME
    ✔ Different ADDRESSES
    ✔ Different SCOPES
    ✔ Different LIFETIMES





*/