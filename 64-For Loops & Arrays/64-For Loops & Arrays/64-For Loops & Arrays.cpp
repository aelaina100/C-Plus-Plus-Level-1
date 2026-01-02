
// How to implement arrays using for-loops.
#include <iostream>
using namespace std;

// create the following example program:

/* How many numbers do you want to enter ? (from 1 to 100):
   5

   Please enter Number 1:
   100
   Please enter Number 2:
   99
   Please enter Number 3:
   55
   Please enter Number 4:
   77
   Please enter Number 5:
   88                       // then immediately the info below is printed:

   Number 1 entered is : 100
   Number 2 entered is : 99
   Number 3 entered is : 55
   Number 4 entered is : 77
   Number 5 entered is : 88

   *********************************
   Sum = 419
   Average = 83.8


*/


void ReadArrayData(int arr1[100], int& NumberOfElements) // arrays are AUTOMATICALLY passed by ref. Including & symbol will cause an exception.
{
    cout << "How many numbers do you want to enter ? (from 1 to 100): \n";
    cin >> NumberOfElements;

    for (int i = 0; i < NumberOfElements; i++) //  ex: if user enters NumberOfElements of 5:   i=0 , i=1, i=2, i=3, i=4 (the body will execute 5 times).
    {
        cout << "Please enter Number " << i + 1 << ": " << endl;
        cin >> arr1[i];
    }
    cout << endl;
}



void PrintArrayData(const int arr1[100], const int &NumberOfElements) // passing both by const reference. Including & symbol for the array will result in throwing an exception.
{
    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << "Number " << i + 1 << " entered is: " << arr1[i] << endl;
    }
}



int CalculateArrayElementsSum(int arr1[100], int NumberOfElements) // passing by value.
{   
    int sum = 0;
    for (int i = 0; i < NumberOfElements; i++)
    {
        sum += arr1[i]; //  same as   sum = sum + arr1[i]
    }

    return sum;
}



float CalculateAverageOfArrayElements(int arr1[100], int NumberOfElements) // passing by value.
{
    int sum = 0;
    for (int i = 0; i < NumberOfElements; i++)
    {
        sum += arr1[i];
    }
    return sum / (float)NumberOfElements;
}


int main()
{
    int arr1[100], NumberOfElements = 0;
    // reserves 100 spaces in memory that are, at this moment, empty (Plus, in programming it's not required to fill up all these spaces in memory for an array).
    // NumberOfElements is the number that the USER will enter representing the number of elements that will be stored in the array via reading user input.

    // Initializing the array variable via reading user input:

    // ** This procedure's job is to ask the user for the number of elements that will be stored in the array & then storing them in the array (in programming we're not required to fill out ALL the reserved spaces in memory (in this specific examples they are 100 reseved so far empty spaces in memory for the array)
    ReadArrayData(arr1, NumberOfElements);  // typing  arr1[100] ❌ refers to the 101 element which DNE & is out of bound ❌
                                  // since arr1 is an array- it is passed as an argument, in this calling function, along with its memory address, 
                                  // thats why arrays are ALWAYS passed by reference in the implementing function with no need to type the & symbol.

    // The array variable 'arr1[100]' and 'NumberOfElements' variable are now initialized.

    PrintArrayData(arr1, NumberOfElements);

    cout << "*********************************\n";

    int SumOfArrayElements = CalculateArrayElementsSum(arr1, NumberOfElements);
    float AverageOfArrayElements = CalculateAverageOfArrayElements(arr1, NumberOfElements); // doing it the long way for learning purposes.

    // CalculateAverageOfArrayElements(SumOfArrayElements)  would be the most optimized real-time choice.
    // with the function implementation being as follows:
    /* 
      float  AverageOfArrayElements(int ResultOfAddingArrayElements, int NumberOfElements)
      {
          return  ResultOfAddingArrayElements / (float)NumberOfElements;
      }
    */
    cout << "Sum of all elements in the array is: " << SumOfArrayElements << endl;
    cout << "The average of all elements in the array is: " << AverageOfArrayElements << endl;

    return 0;
}

/* additional notes:
 
   declaring a 'NumberOfElements' integer without initializing it as in:

   int arr1[100], NumberOfElements;
   ReadArrayData(arr1, NumberOfElements);

   is ❌ wrong and dangerous:

      NumberOfElements is declared but NOT initialized
      It contains garbage (indeterminate) value
      That garbage value is passed into ReadArrayData

  👉 Using NumberOfElements before it is assigned a value = Undefined Behavior


*/













































