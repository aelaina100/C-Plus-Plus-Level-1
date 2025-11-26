
#include <iostream>
using namespace std;
/*
 Since a procedure does not return a value, 
 you MAY place printing or even input statements inside it.

 However, since the only purpose of a function is to return a value,
 I should NOT include printing statements or input statements inside it.

 Never include input statement inside a function- 
 Instead we pass parameters to a function, and the function processes them 
 in order to return a value.

 This is exactly what we did with the round() function,
 where we passed a parameter to it — for example: round(3.7) —
 and the function processed that parameter and returned the value 4.


*/


/*
 Example 1: Simply, examine the following code
*/
 
//int MySumFunction(int num1, int num2) // parameters (initializing values) are passed to the function WHEN it's called (not called means 'sleeping').
//{
//    return num1 + num2; 
//
//}
//
//
//int main()
//{ 
//    int sum;
//
//    sum = MySumFunction(3, 7); // capturing/storing the returned value in a variable first and then printing it is more elegant + for later use in the program.
//    cout << sum << endl;
//    // or quickly just do:
//    cout << MySumFunction(10, 20) << endl;
//    cout << MySumFunction(2, 4) << endl;
//    cout << MySumFunction(6, -9) << endl;
//
//
//    return 0;
//}




/* //////////////////////////////////////////////////////////////////////////////////////////
 Example 2 : In ONLY one program, output the following exactly at it appears utilizing: 
         
                - A function named MySumFunction.
                           
 Please enter Number1 ?
 10

 Please enter Number2 ?
 20
 **************************
 
 30


*/

float MySumFunction(float num1, float num2) // function 'sleeping' till it is called in main()
{
    return num1 + num2;
}

int main() // Where execution begins
{
    float Num1, Num2;
 
    cout << "Please enter Number1 ? \n";
    cin >> Num1;

    cout << "Please enter Number2 ? \n";
    cin >> Num2;

    float sum = MySumFunction(Num1, Num2);
    cout << "**************************\n\n";
    cout << sum << endl;

    return 0;
}


