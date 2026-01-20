
#include <iostream>
using namespace std;
 
/* While-Loop:
   Syntax:


   while (condition)
   {
     // body of while-loop
   }



   How it works:

        ┌───────────────┐
        │     Start     │
        └───────┬───────┘
                │
                ▼
        ┌─────────────────┐
        │  Check condition│◄───────────────┐
        └───────┬─────────┘                │
                │                          │
        ┌───────┴─────────┐                │
        │                 │                │
      TRUE              FALSE              │
        │                 │                │
        ▼                 ▼                │
 ┌─────────────────┐   ┌───────────────┐   │
 │ Execute body    │   │Exit while-loop│   │
 │ (one iteration) │   └───────────────┘   │
 └───────┬─────────┘                       │
         │                                 │
         └─────────────────────────────────┘


 
  As you can see: once condition evaluates to true, 
  execution enters the while-loop - hence, we fall into the "trap" of the while-loop !

  This trap is only escapable when the condition is properly updated 
  so that it eventually evaluates to false.

*/

// Example:
// The goal is to read the following code snippet line by line.
// Do NOT attempt to reproduce it after taking a quick glance at it.
// read slowly one line at a time:


    int number;
    cout << "Please enter a positive number: \n";
    cin >> number;

     // After the user enters a value, the FIRST step is input validation.
     //
     // The while-condition is written so that it is TRUE when the value is INVALID.
     // In this case, the trap is that the loop body warns the user and prompts
     // them to enter a valid value.
     //
     // The loop repeats until a VALID value is entered.
     // Once the condition becomes false, the program continues.
    while (number <= 0)                //  Rule: 👉 The while-condition must represent the INVALID state.                        
    {
        cout << "Wrong Number. Plz enter a positive number: \n";
        cin >> number;
    }

    cout << "\nYou entered the number: " << number << endl;
     
    // As noticed, while-loop is utilized ONLY becasue we don't know
    // how many times the user will keep on entering the wrong number.
    // 
    // if this user enters the wrong number, then they will fall into
    // the while-loop trap that is only escapable if the correct number
    // is entered.
    // for-loop could never be used here as it utilizes a certain number of interations.
 
    // How is the Divide & conquer strategy applied to these lines of code ?
    // The answer, is illustrated in the mental model below:
    // 
    // As noticed, the while-loop is to be included immediately 
     // after the reading user input and all are in the same UTILITY
     // function, we will see in the mental model below.


     // Golden Rule:
    // Write while-loop conditions so they are TRUE when the input is INVALID.
    // The loop becomes a validation trap that only exits when input becomes VALID.



/* While Loop Mental Model:****************************************************************************************************************************
 
 ** A-  A For-Loop such as: */

  
  for (int i = 1; i <= 5; i++)
     {
       cout << i << endl;             
     }

  ///* has the exact equivalent While - Loop:  */


  int i = 1;                  // #1: Type it first
  while (i <= 5)              // #2: Type it secondly
  {
    cout << i << endl;        //<----------- Thelast part to compose is the body.
    i++;                      // #3: Type it third.
  }
  // Just how you compose the for-loop in the order of:    for (initialization; condition; update)
  // compose the while loop in the order instructed above.
  
  /*
   But as a recommendation: 
  
   Use a for loop when the number of iterations is known or can be determined in advance.
   Use a while loop when the number of iterations depends on a condition that is evaluated during execution (often user input or runtime state).
  
  */



  // ** B- While-loop UNIVERSAL UTILITIES:

  
     /* we used to initialize the variable via reading the user input 
     * WITHOUT immediate validation right after the user 
     * finishes both entering a value & clicking on 'Enter'.
     * 
     * Example (on the most basic level):
     */
        
    void ReadUserInput(int &number) // passing by reference
    {
        cout << "Enter an integer number: ";
        cin >> number;
        cout << endl;
    }


    int main()
    {
        int number; // so far this variable has been kept inside main as it is initialized via a reading PROCEDURE. 
        // initializing the variable 'number' via reading user input:
        ReadUserInput(number);
        // The variable 'number' is now initialized.

        return 0;
    }

    /* But from now and on, 
       initializing the variable via reading user input,
       REQUIRES a while-loop validation IMMEDIATELY after
       the cin line. (A while-loop in stead of for-loop since the number of iterations is dependent on the user input).

       Where, these two steps of initializing & validating
       are included in A utility for initializing variable via reading user input & immediately validating its range


     1- In-between values range: */ 
    int ReadIntNumberInRange(int from, int to)
    {
       int number;  
       cout << "Enter a number between " << from << " & " << to << " : ";
       cin >> number;   // it's to be range validated immediately as demonstrated on the next immediate line.

       while (number < from || number > to)
       {
          cout << "You entered the wrong number \n";
          cout << "Only enter a number between " << from << " & " << to << " : ";
          cin >> number;
       }

     return number;
    }


    int main()
    {
        int from = 1;
        int to = 10;
        // Initializing the below variable 'number' via reading user-input, along with immediately validating its range:

        int number = ReadIntNumberInRange(from, to); // do not hardcode the arguments as for example 1 and 10. Instead store them into variables above as we did here.
        // the variable 'number' is now initialized and its range is validated.

        cout << "\nThe entered number is: " << number << endl;

        // or: If you choose not to store the returned value, write the following:
        // cout << "\nThe entered number is: " << ReadIntNumberInRange(from, to) << endl;
        return 0;
    }
    
    

        /*2 - a positive range : */

    int ReadIntUserNumberInRange()
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        while (number <= 0)
        {
            cout << " Enter a positive number only: "
            cin >> number;
        }

        return number;
    }

        int main()
    {
         int number = ReadIntUserNumberInRange(); // always store the returned value.
         cout << "The entered number is: " << number << endl;
    }

        // and you could modify it for negative ranges, etc.




        // and if more than one variable is to be initialized via reading user input,
        // then the above utility functions must turn into utility procedures ( as a function can NOT 
        // return more than one value) 
        // as shown below:

        /*1 - In - between values range*/
        void ReadIntNumberInRange(const int &from, const int &to, int &Num1, int &Num2) // passing by const ref and ref
        {
            cout << "Enter the first  number between " << from << " & " << to << " : ";
            cin >> Num1;   // it's to be range validated immediately as demonstrated on the next immediate line.

            while (Num1 < from || Num1 > to)
            {
                cout << "You entered the wrong number \n";
                cout << "Only enter a number between " << from << " & " << to << " : ";
                cin >> FNum1;
            }

            cout << "Enter the second  number between " << from << " & " << to << " : ";
            cin >> Num2;   // it's to be range validated immediately as demonstrated on the next immediate line.

            while (Num2 < from || Num2 > to)
            {
                cout << "You entered the wrong number \n";
                cout << "Only enter a number between " << from << " & " << to << " : ";
                cin >> Num2;
            }
           
        }


        int main()
        {
            int from = 1;
            int to = 10;
            int Num1, Num2,

            // Initializing the variables 'Num1' & 'Num2' via reading user input, along with immediately validating their range:
            ReadIntNumberInRange(from, to, Num1, Num2); 

            cout << "\nThe entered first number is: " << Num1 << endl;
            cout << "\nThe entered second number is: " << Num2 << endl;

            return 0;
        }



        /*2 - In - between values range*/
        int ReadIntNumberInRange(int &Num1,int &Num2) // passing by reference.
        {
            cout << "Enter the first number: ";
            cin >> Num1;

            while (Num1 <= 0)
            {
                cout << " Enter a positive number only: "
                cin >> Num1;
            }

            cout << "Enter the second number: ";
            cin >> Num2;

            while (Num2 <= 0)
            {
                cout << " Enter a positive number only: "
                cin >> Num2;
            } 
        }


        int main()
        {
            int Num1, Num2;

            // initializing Num1 & Num2 via reading user input, along with immediately validating their range:
            int ReadIntNumberInRange(Num1, Num2);

            cout << "The entered number is: " << number << endl;
        }

        //*****************************************************************************************************************************************
     // An example of an 'akward' non-optimized coding would be:

    void ReadIntNumberInRange(int &number, const int &from, const int &to)
    {
        cout << "Enter a number between " << from << " & " << to << " : ";
        cin >> number;

        while (number < from || number > to)
        {
            cout << "You entered the wrong number \n";
            cout << "Only enter a number between " << from << " & " << to << " : ";
            cin >> number;
        }
 
    }

  
    int main() 
    {          
        int from = 1;
        int to = 10;
        int number;

        ReadIntNumberInRange(number, from, to);   

        cout << "\nThe entered number is: " << number << endl;

        // or: If you choose not to store the returned value, write the following:
        // cout << "\nThe entered number is: " << ReadIntNumberInRange(from, to) << endl;
        return 0;
    }
     
    /*
      This approach is awkward because one could have simply written:

          int number = ReadIntNumberInRange(from, to);

      — as shown earlier — where only TWO arguments are passed and the function
      clearly returns a valid value.

      Furthermore, this version signals that an already existing and well-designed
      utility is being ignored, and instead the code is unnecessarily complicated
      by introducing a reference parameter with no real benefit.

      In short:
      - More parameters
      - More cognitive load
      - No added value

      This violates the principle of simplicity and discourages reuse of clean,
      purpose-built utilities.
*/


     
     
  
     
     /*
     Utility Function – ReadIntNumberInRange

     This utility function takes the parameters 'from' and 'to' and does two things:
     1) Initializes a numeric variable by reading user input.
     2) Validates that the entered number is within the specified range.

     It is called a "utility" because it can be reused across different programs and
     contexts. Instead of rewriting the same input + validation logic multiple times
     within one program or across multiple programs, we write this logic ONCE inside
     a function and call it whenever needed.

     In this specific case, every time we need a numeric variable to be initialized
     via user input, we IMMEDIATELY need to validate its range. Therefore, we design
     ONE utility function that combines reading input and validating it using a while
     loop.

     At a superficial level, this may appear to violate the Single Responsibility
     Principle (SRP) because the function performs two actions:
     - Reading user input
     - Validating the input range

     However, at the responsibility level, this does NOT constitute a true SRP
     violation. Both actions serve a single responsibility:
     "Obtaining a valid integer from the user within a specified range."

     SRP is concerned with the number of reasons to change, not the number of steps
     inside a function. In this case, there is only one reason to change: modifying
     the rules for acquiring a valid ranged integer.

     Examples of usage:
     - Setting an age range:
       ReadIntNumberInRange(1, 250)

     - Setting a marks range:
       ReadIntNumberInRange(0, 100)

     - Setting a negative range (caller must ensure from <= to):
       ReadIntNumberInRange(-10, -5)

     Additional note:
     In C++ Level 2, we will learn how to create our own libraries where such utility
     functions (functional or procedural utilities) will be grouped and reused
     across projects.
     */



