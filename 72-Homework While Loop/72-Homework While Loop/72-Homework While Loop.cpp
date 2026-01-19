// 72-Homework While Loop.cpp 

#include <iostream>
using namespace std;

/*
 
 Solve the following problems of "سلسلة الخوارزميات وحل المشاكل":
 Utilizing while-loops ONLY instead of for-loops:

 #26, #27, #28, #29, #30, #32, #37, #46, #50

 Notes:
 - #30: factorial : validate positive numbers.

*/





/*
 Problem #26:

 Write a program to print numbers from 1 to N.

 Input:
 10

 Outputs:
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10

*/




void ReadUserInput(int &number) // passing by reference
{
    cout << "Enter an integer number: ";
    cin >> number;
    cout << endl;
}

void PrintFromNumberTo1(const int &number) // passing by const reference
{
    int i = number;
    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}

int main()
{
    int number;
    // initializing this variable via reading user input:
    ReadUserInput(number);

    PrintFromNumberTo1(number);

    return 0;
}




















/*  #27

*/



/*  #28

*/



/*  #29

*/



/*  #30
    factorial : validate positive numbers.
*/



/*  #32

*/



/*  #37

*/



/*  #46

*/



/*  #50

*/







