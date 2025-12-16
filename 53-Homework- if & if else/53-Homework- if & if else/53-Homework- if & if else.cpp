

#include <iostream>
using namespace std;

/* Before delving into this homework, Here are 2 key notes:
 
                             /* Note #1:
  For a boolean variable, initializing it with 1 / true or 0 / false
  will store the value in memory as either:
  - 1 for true
  - 0 for false

  When printing a boolean variable using cout, the output will be 1 or 0 by default.

  ⚠️ Important input note:
  Initializing a bool via user input using:
    cin >> boolVariable;
  expects the user to enter:
    1 (true) or 0 (false)

  Entering the words "true" or "false" is dangerous and unreliable.
  Depending on the compiler and stream settings, such input may fail silently,
  leaving the boolean variable unchanged or set to false.

  This can cause logical conditions such as:
      if (PersonalInfo.age > 21 && PersonalInfo.HasDriverLicense)
  to fail unexpectedly, even if the user typed "true".

  ✅ Best practice:
  Always instruct the user to enter:
      1 for true
      0 for false
  when reading boolean values via cin.
*/
//**********************************************************************************************
/* 
                             Note #2:
               By Value Vs By Reference: Final, Correct, Professional Version (Recommended)

 We pass by reference in the following cases:

 1️⃣ Initializing variables in main() via user input

 If a function’s responsibility is to initialize or fill data declared in main(), we must pass by reference.
 Otherwise, the function would modify only a copy, and main() would still contain uninitialized values,
 making it impossible to continue correct execution.

 2️⃣ Intentionally modifying original values

 When we deliberately want to change the original data in main() (e.g., swapping numbers, updating fields,
 accumulating results), we pass by reference.

 This is also important for performance reasons when dealing with large data structures, as passing by value would:
 - create a new memory copy
 - waste time and memory
 - limit the changes to the function scope only

 3️⃣ Printing procedures (read-only operations)

 For procedures that only print or display data already initialized in main(), passing by value is unnecessary
 and inefficient.

 Instead, we pass by const reference:
 - to avoid creating a new memory copy
 - to clearly express that the function is read-only
 - to prevent accidental modification, even if the function only prints

 4️⃣ Validation / comparison procedures (if / if-else / logical checks)

 For procedures that perform comparisons or decision-making logic (such as validation using conditional statements),
 we also pass by const reference.

 This follows the same reasoning as printing:
 - no need to copy data
 - no intention to modify it
 - guaranteed safety via const
*/
//********************************************************************************************************************************



/* Homework: #4, #8, #11, #24, #49

*/

/*
 #4: 
 Write a program that asks the user to enter their:

 - Age.
 - and if he/ she has a Driver License.

 Then print "Hired" if their age is greater than 21 and if they have a driver license.
 Otherwise, print rejected.


*/


struct stPersonalInfo
{
    unsigned short age;
    bool HasDriverLicense;
};

void ReadPersonalInfo(stPersonalInfo &PersonalInfo) // passing by ref.
{
    cout << "Enter your age: \n";
    cin >> PersonalInfo.age;
    cout << endl;

    cout << "Do you have a Driver License (1 = Yes, 0 = No) \n";
    cin >> PersonalInfo.HasDriverLicense;
    cout << endl;
}

void ValidatePersonalInfo(const stPersonalInfo &PersonalInfo) // passing by ref.
{
    if (PersonalInfo.age > 21 && PersonalInfo.HasDriverLicense)
    {
        cout << "Hired !";
    }
    else
    {
        cout << "Rejected";
    }
}

int main()
{
    stPersonalInfo PersonalInfo;

    //Initializing the variable 'PersonalInfo' via user input
    ReadPersonalInfo(PersonalInfo); // فَرِّق تَسُد

    // Initialization of 'PersonalInfo' is now complete.
    ValidatePersonalInfo(PersonalInfo); // فَرِّق تَسُد

    return 0;
}



