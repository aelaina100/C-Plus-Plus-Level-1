

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

//void ReadGrade(float& grade)
//{
//    cout << "Enter a grade: \n";
//    cin >> grade;
//    cout << endl;
//}
//
//void EvaluateGrade(const float& grade) // by const ref.  % USE  A FUNCTION of char type return by value
//{
//    if (grade >= 90)
//    {
//        cout << "A" << endl;
//    }
//    else if (grade >= 80)
//    {
//        cout << "B" << endl;
//    }
//    else if (grade >= 70)
//    {
//        cout << "C" << endl;
//    }
//    else if (grade >= 60)
//    {
//        cout << "D" << endl;
//    }
//    else if (grade >= 50)
//    {
//        cout << "E" << endl;
//    }
//    else
//    {
//        cout << "F" << endl;
//    }
//}
//
//int main()
//{
//    float grade;
//
//    // Initilizing the variable via user input:
//    ReadGrade(grade);
//
//    // variable 'grade' has been initialized.
//    EvaluateGrade(grade); % ALSO since programs end here. we are not explicitly telling the user we are printing
//                          % and print only using count (instead of adedicated print function that prints 
//                          % a temple and its associated values.
//    return 0;
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

//void ReadTotalSales(float &TotalSales) // passing by reference.
//{
//    cout << "Enter Total Sales: \n";
//    cin >> TotalSales;
//    cout << endl;
//}
//
//float EvaluateCommissionPercentage(const float &TotalSales)  // % pass by value
//{
//    if (TotalSales >= 1000000)
//    {
//        return 0.05;
//    }
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
//}
//
//float CalculateCommissionAmount(float CommissionPercentage, float TotalSales) // passing by value. 100!
//{
//    return CommissionPercentage * TotalSales;
//}
//
//int main()
//{
//    float TotalSales;
//
//    // Initializing this variable via user input:
//    ReadTotalSales(TotalSales);
//
//    // 'TotalSales' variable is now initialized.
//    float CommissionPercentage = EvaluateCommissionPercentage(TotalSales);
//    
//    float CommissionAmount = CalculateCommissionAmount(CommissionPercentage, TotalSales);
//    cout << CommissionAmount << endl;
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// do NOT even think about structures here as the commission percentage is derived from total sales 
// & commision amout in derived from commision percentage.


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

//struct stCalculation
//{
//    float Number1;
//    float Number2;
//    string OperationSymbol;
//};
//
//void ReadOperationData(stCalculation &calculation)
//{
//    cout << "Enter the first number: \n";
//    cin >> calculation.Number1;
//    cout << endl;
//
//    cout << "Enter the second number: \n";
//    cin >> calculation.Number2;
//    cout << endl;
//
//    cout << "Enter the Operation Symbol: \n";
//    cin >> calculation.OperationSymbol;
//    cout << endl;
//}
//
//float calculate(const stCalculation &calculation) // % pass by value.
//{
//    if (calculation.OperationSymbol == "+")
//    {
//        return calculation.Number1 + calculation.Number2;
//    }
//    else if (calculation.OperationSymbol == "-")
//    {
//        return calculation.Number1 - calculation.Number2;
//    }
//    else if (calculation.OperationSymbol == "/")
//    {
//        return calculation.Number1 / calculation.Number2;
//    }
//    else if (calculation.OperationSymbol == "*")
//    {
//        return calculation.Number1 * calculation.Number2;
//    }
//    else
//    {
//        cout << "invalid operation symbol !";
//        return 0; // immediately exits the function and sends the value 0 back to the caller as the function’s result.
//    }             // but this is NOT the correct way of doing it:- 🔑 Never use a valid value to signal an error.
//                  // we will see how to do it the correct way in the upcoming tuturials. Stay tuned !
// }
//
//
//int main()
//{
//    stCalculation calculation;
//    
//    //Initializing the variable via user input:
//    ReadOperationData(calculation);
//
//    // The variable 'calculation' has been fully initialized.
//    float CalculationResult = calculate(calculation);
//    cout << CalculationResult << endl;
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #44, #45
 
 Write a program that asks the user to enter:

 - day

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

void ReadDay(unsigned short &day)
{
    cout << "Enter the day in numbers (1 to 7): \n";
    cin >> day;
    cout << endl;
}

string CheckDay(const unsigned short& day) // % by value
{
    if (day == 1)
    {
        return "It is Sunday";
    }
    else if (day == 2)
    {
        return "It is Monday";
    }
    else if (day == 3)
    {
        return "It is Tuesday";
    }
    else if (day == 4)
    {
        return "It is Wednesday";
    }
    else if (day == 5)
    {
        return "It is Thursday";
    }
    else if (day == 6)
    {
        return "It is Friday";
    }
    else if (day == 7)
    {
        return "It is Saturday";
    }
    else
    {
        return "Only enter 1 through 7";
    }
}


int main()
{
    unsigned short day;

    //Initilizing the variable via user input
    ReadDay(day);

    // Variable 'day' is now initialized.
    string CheckedDay =CheckDay(day);
    cout << CheckedDay << endl;

    return 0;
}