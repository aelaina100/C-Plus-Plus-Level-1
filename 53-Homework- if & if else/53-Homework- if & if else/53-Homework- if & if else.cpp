

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

 Instead, we pass by const reference: (Not just by reference)
 - to avoid creating a new memory copy
 - to clearly express that the function is read-only
 - to prevent accidental modification, even if the function only prints

 NOTE: For printing, passing by reference and not by constant reference is wrong (by design, not by behavior):
       because passing by reference only implies mutation. 

 4️⃣ Validation / comparison procedures (if / if-else / logical checks)

 For procedures that perform comparisons or decision-making logic (such as validation using conditional statements),
 we also pass by const reference (Not just by reference). 

 NOTE: For Validation / comparison procedures, passing by reference and not by constant reference is wrong (by design, not by behavior):
       because passing by reference only implies mutation. 

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

void ValidatePersonalInfo(const stPersonalInfo &PersonalInfo) // passing by const ref.
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
////**************************************************************************************************************************
/*
 #4:
 Write a program that asks the user to enter:

 - A mark

 Then print "Pass" if  mark >= 50,
 Otherwise, print "Fail".


*/


void ReadMark(float& mark) // passing by ref.
{
    cout << "Enter mark: \n";
    cin >> mark;
    cout << endl;
}

void EvaluateMark(const float &mark) // passing by const ref: Just wanting to compare.
{
    if (mark >= 50)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    float mark;

    //initialization via user input:
    ReadMark(mark); // فَرِّق تَسُد

    //Initialization is now complete ( = variable 'mark' has been assigned a value).
    EvaluateMark(mark); // فَرِّق تَسُد

    return 0;
}
//******************************************************************************************************************************

/*
 #11:
 Write a program that asks the user to enter:

 - Mark1, Mark2, Mark3

 Then print the Average of the entered marks, and print "PASS" if the average >= 50.
 Otherwise, print "FAIL".

 Example Inputs:
 90
 80
 70 

 Outputs ->
 80 
 PASS

*/

struct stMarks
{
    float Mark1;
    float Mark2;
    float Mark3;
};

void ReadMarks(stMarks &marks) 
{
    cout << "Enter First Mark: \n";
    cin >> marks.Mark1;
    cout << endl;

    cout << "Enter Second Mark: \n";
    cin >> marks.Mark2;
    cout << endl;

    cout << "Enter Third Mark: \n";
    cin >> marks.Mark3;
    cout << endl;
}

float AverageMarks(stMarks marks)
{
    return (marks.Mark1 + marks.Mark2 + marks.Mark3) / 3;
}

void EvaluateAverage(const float &MarksAverage)
{
    if (MarksAverage >= 50)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}

int main()
{
    stMarks marks;

    //Initialization via user input:
    ReadMarks(marks);

    // variable 'marks' is now fully initialized.
    float MarksAverage = AverageMarks(marks);
    cout << MarksAverage << endl;

    EvaluateAverage(MarksAverage); // فَرِّق تَسُد

    return 0;
}
// Note: ❌ Do not declare MarksAverage immediately after stMarks marks.
// Declare variables as close as possible to where they receive their first valid value,
// to avoid uninitialized states and preserve logical flow during code review.


/* #24
  Write a program that asks the user to enter;

  -Age

  If age is between 18 and 45, print "Valid Age". Otherwise, print "Invalid Age".

*/


void ReadAge(unsigned short &age)
{
    cout << "Enter Age: \n";
    cin >> age;
    cout << endl;
}

void ValidateAge(const unsigned short &age)
{
    if (age <= 45 && age >= 18)
    {
        cout << "Valid Age \n";
    }
    else
    {
        cout << "Invalid Age \n";
    }
}

int main()
{
    unsigned short age;

    // initializing this variable via user input
    ReadAge(age);

    // variable 'age' is now initialized
    ValidateAge(age);



    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #49
  Write a program that reads the ATM PIN code from the user,
  then check if the PIN Code = 1234 and then show the balance to the user.

  Otherwise, print "Wrong PIN".
  
  Assume the user balance is 7500

  Example:
  
  Input: 1234
  Output: Your balance is 7500

  or

  Input: 5151
  Output: Wrong PIN

*/


void ReadPinCode(int &PinCode)
{
    cout << "Enter the Pin Code: \n";
    cin >> PinCode;
    cout << endl;
}

void ValidatePinCode(const int &PinCode) // passing by const ref.
{
    if (PinCode == 1234)
    {
        cout << "Your balance is 7500" << endl;
    }
    else
    {
        cout << "Wrong PIN" << endl;
    }
}

int main()
{
    int PinCode;

    //Initializing this variable via user input:
    ReadPinCode(PinCode);

    //The variable 'PinCode' is now initialized.
    ValidatePinCode(PinCode);


    return 0;
}