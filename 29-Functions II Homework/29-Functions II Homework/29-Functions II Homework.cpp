#include <iostream>
using namespace std;
/* Homework #1: In ONLY one program, output the following exactly at it appears utlizing: 
         
                - A Procedue named MySumProcedure.
                - A function named MySumFunction.
                
                
 Please enter Number1 ?
 10

 Please enter Number2 ?
 20
 **************************
 
 30


*/

void MySumProcedure()
{
    float Number1, Number2, sum;

    cout << "Please enter Number1 ?" << endl;
    cin >> Number1;
    cout << endl;

    cout << "Please enter Number2 ?" << endl;
    cin >> Number2;
    cout << "**************************\n\n";

    sum = Number1 + Number2;
    cout << "The sum of " << Number1 << " and " << Number2 << " = " << sum << endl;

}

float MySumFunction()
{
    float Number1, Number2;
    
    cout << "Please enter Number1 ?" << endl;
    cin >> Number1;
    cout << endl;

    cout << "Please enter Number2 ?" << endl;
    cin >> Number2;
    cout << "**************************\n\n";

    /* sum = Number1 + Number2;   // these 2 lines: unoptimized way of writing the code as the sum result will be equate the function call ( =  MySumFunction())
       return sum;                                  with nothing stored in memory, where later in the main function, 
                                                    you will create a variable that will capture / store the returned value.
                                                    Therefore, why returning a variable that stores the sum result which will in turn
                                                    equate the function call ( =  MySumFunction())  with nothing stored in memory ?
                                                    sounds very redundant work.
    */
    return Number1 + Number2; // The optimzed way. No extra parentheses needed.


}


int main()
{   
    float sum;
    MySumProcedure();
    cout << "-----------------------\n\n";

    cout << "The sum of the two numbers are: " << MySumFunction() << endl;

    return 0;
}


