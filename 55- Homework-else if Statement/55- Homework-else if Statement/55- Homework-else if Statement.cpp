

#include <iostream>
using namespace std;

/* Homework: Again, the solution is at the current level of the learner. In the next course- I will present the final professional solution.

 #33, #34, #36, #44, #45

*/

/* Problem 33:

    Write a program that asks the user to enter:
    - Grade

    Then print the grade according to the following rules:

    - 90 and 100 → Print 'A'
    - 80 and 89  → Print 'B'
    - 70 and 79  → Print 'C'
    - 60 and 69  → Print 'D'
    - 50 and 59  → Print 'E'
    - Otherwise  → Print 'F'

    Example Input:
    95

    Output:
    A
*/

//void ReadGrade(float& grade) // passing by reference
//{
//    cout << "Enter a grade: \n";
//    cin >> grade;
//    cout << endl;
//}
//
//char AccessGradeLetter(const float &grade) // passing by constânt reference
//{
//    if (grade >= 90)
//    {
//        return 'A';
//    }
//    else if (grade >= 80)
//    {
//        return 'B';
//    }
//    else if (grade >= 70)
//    {
//        return 'C';
//    }
//    else if (grade >= 60)
//    {
//        return 'D';
//    }
//    else if (grade >= 50)
//    {
//        return 'E';
//    }
//    else
//    {
//        return 'F';
//    }
//}
//
//
//int main()
//{
//    float grade;
//    // Initializing this variable via user input:
//    ReadGrade(grade);
//
//    // variable 'grade' has been initialized.
//    char GradeLetter = AccessGradeLetter(grade);
//
//    //Print the grade letter 
//    // (No need to create a dedicated procedure for printing in this case. Would be appropriate if we have more than cout line).
//    cout << GradeLetter << endl;
//
//    return 0;
//
//}

////////////////////////////////////////////////////////////////////////////////////////
 /*
    Problem 34:

    Write a program that asks the user to enter:

    - TotalSales

    The commission is calculated as:
    Commission = Percentage * TotalSales

    The percentage is determined according to the following rules:

    - If TotalSales is greater than or equal to 1,000,000                       → Percentage = 5%
    - If TotalSales is less than 1,000,000 and greater than or equal to 500,000 → Percentage = 3%
    - If TotalSales is less than 500,000 and greater than or equal to 100,000   → Percentage = 2%
    - If TotalSales is less than 100,000 and greater than or equal to 50,000    → Percentage = 1%
    - Otherwise                                                                 → Percentage = 0%

    Example:
    Input:
    110000

    Output:
    2200
*/



//void ReadTotalSales(double &TotalSales) // passing by reference,
//{
//    cout << "Enter the Total Sales amount: \n";
//    cin >> TotalSales;
//    cout << endl;
//}
//
//double DetermineCommissionPercentage(const double& TotalSales) // passing by constant reference since we are comparing values via conditional statements.
//{
//    if (TotalSales >= 1000000)
//    {
//        return 0.05;
//    }
//
//    else if (TotalSales >= 500000)
//    {
//        return 0.03;
//    }
//    else if (TotalSales >= 100000)
//    {
//        return 0.02;
//    }
//    else if (TotalSales >= 50000)
//    {
//        return 0.01;
//    }
//    else
//    {
//        return 0;
//    }
//
//}
//
//double CalculateCommissionAmount(double CommissionPercentage, double TotalSales) //Passing by value
//{
//    return  CommissionPercentage * TotalSales;  
//}                                               
//
//
//int main()
//{
//    double TotalSales;  // for money , use double 
//    // Initilizing via user input:
//
//    ReadTotalSales(TotalSales);
//    // Now TotalSales variable has been initialized
//
//    double CommissionPercentage = DetermineCommissionPercentage(TotalSales);
//
//    double CommissionAmount = CalculateCommissionAmount(CommissionPercentage, TotalSales);
//
//    cout << "Commission Amount is: " << CommissionAmount << endl;
//
//
//    return 0;
//}


// NOTE A: Best practice:
// Declare a variable only when you are ready to initialize it.
//
// Rationale:
// - Prevents the use of uninitialized (garbage) values
// - Makes code safer, clearer, and easier to reason about
// - Reduces the lifetime and scope of variables
//
// Declaring variables early and initializing them later is discouraged,
// because it increases the risk of accidental use before initialization
// (whether directly or via user input).


 /*
============================================================
Special Case NOTE 2: Numeric Types & Financial Calculations
============================================================

double CalculateCommissionAmount(double commissionPercentage,
                                 double totalSales)
{
    return commissionPercentage * totalSales;
}

Why this design is correct:

1) Type Promotion Rule (C++):
   - When mixing numeric types (e.g., float * double),
     the compiler promotes the smaller type (float)
     to the larger type (double) BEFORE performing the operation.
   - This promotion is done to PREVENT DATA LOSS and preserve precision.
   - Therefore:
       float  → double
       double * double → double

2) Return Type Consistency:
   - Since the result of the multiplication is double,
     the function must return double.
   - Returning float would introduce precision loss
     when equating the result to the function name.

3) Financial Calculation Rule:
   - Monetary values and percentages must NOT use float.
   - Values such as 0.01, 0.02, 0.05 require higher precision.
   - Therefore, all money-related variables should be declared as double,
     including:
       - totalSales
       - commissionPercentage
       - commissionAmount

Conclusion:
- Avoid mixing float and double in financial logic.
- Use double consistently for money and percentages.
- Match the function return type to the true precision of the calculation.
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/* #36:

 Write a program to ask the user to enter:

 - Number1
 - Number 2
 - OperationType

 Then perform the calculation according to the Operation Type as follows:

 - "+" : add the two numbers.
 - "-" : Subtract the two numbers.
 - "*" : Multiply the two numbers.
 - "/" : Divide the two numbers.

 Example Inputs:

 10
 20
 *

 Outputs →
 200
*/


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #44
 
 Write a program that asks the user to enter:

 - A number (1 -7) for day.

 Then print the day as follows:
 
 -1 prints Sunday
 -2 prints Monday
 -3 prints Tuesday
 -4 prints Wednesday
 -5 prints Thursday
 -6 prints Friday
 -7 prints Saturday
 -Otherwise, print "Wrong Day" and ask the user to enter the day again.

 Example Input:
 6

 Output:
 It's Friday

*/



void ReadDayNumber(unsigned short &day)
{
    cout << "Enter a number (from 1 to 7) for day: \n";
    cin >> day;
    cout << endl;
}

string AssigningDayToNumber(const unsigned short& day)
{
    if (day == 1)
    {
        return "Sunday";
    }
    else if (day == 2)
    {
        return "Monday";
    }
    else if (day == 3)
    {
        return "Tuesday";
    }
    else if (day == 4)
    {
        return "Wednesday";
    }
    else if (day == 5)
    {
        return "Thursday";
    }
    else if (day == 6)
    {
        return "Friday";
    }
    else if (day == 7)
    {
        return "Saturday";
    }
    else
    {
        return "Wrong day";
    }
}

int main()
{
    unsigned short day;

    ReadDayNumber(day);

    string DayName = AssigningDayToNumber(day);
    cout << "It's " << DayName << endl;


    return 0;
}




