#include <iostream>
using namespace std;

/* Passing (Sending) function parameters by value VS by reference
 
    Examine this cut-out part of some code:
*/

int main()
{
    int Num1;

    Num1 = 1000;

    MyFunction(Num1);

    cout << "Number after calling the function became = " << Num1 << endl;

    return 0;

}
/*    ⭐ Conclusion to draw from this code:
         We can already predict the output before seeing the rest of the code.

      ✅ Case 1 — Parameter passed by value
      If Num1 is passed by value, then:

           -A new variable (also named Num1) is created inside the function’s scope.
           -This new variable receives a copy of the value 1000.
           -Any modification inside the function affects only the copied variable, not the one inside main().

       Therefore:

      ✔ 1000 will be printed,
      because the original Num1 inside main() remains unchanged.
  
      ✅ Case 2 — Parameter passed by reference
      If Num1 is passed by reference, then:

           -No new variable is created inside the function.
           -The function receives a reference (an alias) to the same Num1 that belongs to the scope of main().
           -Any change inside the function directly modifies the original Num1.

      Therefore:

      ✔ Any number other than 1000 will be printed,
      if the function modifies the parameter.
*/
   
/*
       *********************************  🎯 Perfect Summary (Expanded)   *********************************

        Pass-by-value:

        → A copy is created
        → The original variable is untouched
        → Prints 1000

        ✔ This is the regular and common practice in programming.
        Most functions work on copies because it is safer and prevents accidental modification of variables created in main() (or any caller).

        Pass-by-reference:

        → No copy is created
        → The function works directly on the original variable from main()
        → Prints whatever new value the function assigns

        ⚠ This is not the regular practice.
        It must be used carefully, because the function can directly change the variables created in main().
        We only use pass-by-reference in specific scenarios, such as:

           - When we intentionally want to modify the caller’s variable
           - When returning multiple outputs
           - When we want to avoid copying large data for performance reasons
           - When writing procedures that perform in-place updates
 ******************************************************************************************************************************************************************
*/

// A- Now, let's look at the entire code & predict the outcome:

void MyFunction(int Num1) 
{
    Num1 = 7000;

    cout << "Number inside this procedure = " << endl;

}


int main()
{
    int Num1;

    Num1 = 1000;

    MyFunction(Num1);

    cout << "Number after calling the function = " << Num1 << endl;

    return 0;
}

/*
    When the controller executes the line:  MyFunction(Num1);
    this means that MyFunction(Num1) is being called.

    The value 1000 is passed to the parameter "int Num1" inside MyFunction().
    Since the parameter is passed BY VALUE:

        ✔ A new variable with the EXACT same name "Num1" is created
          inside the scope of MyFunction().

        ✔ This new variable receives a COPY of the value 1000.

        ✔ The original Num1 inside main() remains completely and
          absolutely unaffected.

    Inside MyFunction(), this copied value (1000) is then overwritten
    and changed to 7000.

    Therefore, the output becomes:

        Number inside this procedure = 7000
        Number after calling the function = 1000
*/
//*******************************************************************************************************************************************************
// B- Now, let's look at another version of this entire code & predict the outcome:

void MyFunction(int &Num1)
{
    Num1 = 7000;

    cout << "Number inside this procedure = " << endl;

}


int main()
{
    int Num1;

    Num1 = 1000;

    MyFunction(Num1);

    cout << "Number after calling the function = " << Num1 << endl;

    return 0;
}

/*
    When the controller executes the line:  MyFunction(Num1);
    this means that MyFunction(Num1) is being called.

    The value 1000 is sent to the parameter "int &Num1" inside MyFunction().
    Since the parameter is passed BY REFERENCE:

        ✔ NO new variable with the name "Num1" is created inside
          the scope of MyFunction().

        ✔ The parameter "Num1" inside MyFunction() becomes an ALIAS
          (a direct reference) to the SAME Num1 variable created in main().

        ✔ Therefore, both main() and MyFunction() are pointing to and
          working on the EXACT SAME memory address.

    Inside MyFunction(), the statement:
            Num1 = 7000;
    directly modifies the Num1 that belongs to main().

    Therefore, the output becomes:

        Number inside this procedure = 7000
        Number after calling the function = 7000
*/

