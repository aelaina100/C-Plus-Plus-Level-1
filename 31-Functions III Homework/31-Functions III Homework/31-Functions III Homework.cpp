#include <iostream>
#include <cmath>
using namespace std;


/* Homework III (Functions): Solve using either functions or procedures (Depending on what's needed).

   #1,#2,#14,#15,#16,   #18,#19,#20,#21,#22,    #23,#31,#32,#42,#43
*/


/*                             ************** AN IMPORTANT REMINDER **************
 Since a procedure does not return a value,
 you MAY place printing or even input statements inside it.
 HOWEVER- it is strongly preferred to pass parameters even to a procedure instead of writing user-input code inside it.

 Also, a procedure, just like a function, still does ONLY one thing (✔️ Single Responsibility Principle)
 

 However, since the only purpose of a function is to return a value,
 I should NOT include printing statements or input statements inside it.

 Never include input statements inside a function- Input statements are meant solely for initializing variables via user input, 
 NOT for use inside functions whose purpose is to process and return values.
 Instead we pass parameters to a function, and the function processes them
 in order to return a value.

 This is exactly what we did with the round() function,
 where we passed a parameter to it — for example: round(3.7) —
 and the function processed that parameter and returned the value 4.


 Furthermore- it is strongly preferred to pass parameters even to a procedure instead of writing user-input code inside it.
*/

/* #1:      Print "Adam" */

//void PrintName()
//{
//	string name = "Adam";
//	cout << name << endl;
//}
//int main()
//{
//	PrintName();
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////

/* #2: Write a program to ask the user to enter his/her name and print it on the screen.
*/

//void PrintEnteredName(string name) 
//{                                    
//	cout << name << endl;           
//}
//
//int main()
//{
//	string name;
//	cout << "Please enter your name: \n";
//	cin >> name;
//	cout << endl;
//
//	PrintEnteredName(name);
//
//	return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////
/* #14:

   Write a program to ask the user to enter:
   - Number1
   - Number2

   Then print the two numbers, then swap the two numbers & print them.

*/

//void PrintTheEnteredTwoNumbers(float Num1, float Num2)
//{
//	cout << "The first entered number is: " << Num1 << endl;
//	cout << "The second entered number is: " << Num2 << endl;
//
//}
//
//void swapTheEnteredTwoNumbers(float& Num1, float& Num2) // Created as a procedure, because a function can only return one specific value,
//                                                        // and the two swapped numbers cannot be returned together.
//{                                                      // '&' means pass-by-reference, so we work with the original Num1 and Num2 from main(),
//                                                      // instead of creating new variables named Num1 and Num2 (in a different memory space)
//	float temp = Num1;                               // whose scope (lifetime and visibility) belong only to the procedure’s own scope.
//	Num1 = Num2;                                     
//	Num2 = temp;
//	// Now the Num1 and Num2 in main() are swapped-
//}
//
//
//int main()
//{
//	float Num1, Num2;
//
//	cout << "Enter the First Number: \n";
//	cin >> Num1;
//
//	cout << "Enter the Second Number: \n";
//	cin >> Num2;
//	cout << endl;
//
//	PrintTheEnteredTwoNumbers(Num1, Num2);
//	swapTheEnteredTwoNumbers(Num1, Num2);
//	PrintTheEnteredTwoNumbers(Num1, Num2);
//	/*
//   The two lines below are an unoptimized approach, because the function
//   PrintTheEnteredTwoNumbers(Num1, Num2) already performs the exact same output.
//
//   cout << "variable named Num1 now = " << Num1 << endl;
//   cout << "variable named Num2 now = " << Num2 << endl;
//    */
//
//	return 0;
//	// Crucial: There is a note block at the very bottom elaborating on this example code.
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

/* #15
   Write a program to calculate rectangle area and print it on the screen:

   - With the user input of width a
   - With the user inpput of height b

   Formula:  Area = a * b  
   */


//float RectangleArea(float width, float height)
//{
//    float area = width * height;
//    return area;
//
//}
//
//int main()
//{
//    float width, height,AreaOfRectangle;
//
//    cout << "Enter the Rectangle's width: \n";
//    cin >> width;
//
//    cout << "Enter the Rectangle's height: \n";
//    cin >> height;
//    cout << endl;
//
//    AreaOfRectangle = RectangleArea(width, height);
//
//    cout << "The Area of the Rectangle is: " << AreaOfRectangle << endl;
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* #16: 
   Write a program to calculate Rectangle Area through the diagonal and width and print it on the screen:

   -With the user input of:
        -Width a
        -Diagonal length d

    Formula:    Area = a . Square root ( (d * d) - (a * a))
 */

//float RectangleArea(float width, float diagonal)
//{
//    float area = width * sqrt((diagonal * diagonal) - (width * width));
//    return area;
//
//}
//
//
//int main()
//{
//    float width, diagonal, AreaOfRectangle;
//
//    cout << "Enter the Rectangle Width: \n";
//    cin >> width;
//
//    cout << "Enter the Rectangle Diagonal: \n";
//    cin >> diagonal;
//    cout << endl;
//
//    AreaOfRectangle = RectangleArea(width, diagonal);
//
//    cout << "Rectangle Area = " << AreaOfRectangle << endl;
//
//
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////

//#18, #19, #20, #21, #22




















































//////////////////////////////////////////////////////////////////////////////////
/* Invaluable note regarding the above #14:
*  1- A swapping function is not possible as function only returns one specific value (the 2 swapped numbers can't be returned). 
 
   2- Having:

      void SwappingTwoNumbers(float Num1, float Num2)

 means the parameters are passed **by value**.

 C++ creates new variables named Num1 and Num2 in a different memory space.
 These variables belong only to the procedure’s own scope.

 Even though they share the same names as the variables in main(),
 they are completely separate because their lifetime and visibility (scope)
 are restricted to the procedure.

 In other words, we are working with *copies* inside the procedure’s scope,
 not the original variables from main().

 Any changes (including swapping) affect only these copies.

📌 Result:
 The swap appears correct inside the procedure,
 but the real Num1 and Num2 in main() never change.

 . In programming, the normal and preferred behavior is that functions do not modify the variables in main(). 
   A pure function only uses its inputs and returns a value without causing side effects.
   Therefore, passing parameters by value is the standard approach because it ensures safety, predictability, and protects the original data from accidental changes.
   The exception is when you intentionally want to modify the caller's (main()) variables
 — for example, swapping two numbers, where passing by reference becomes necessary.


------------------------------------------------------------
        🔍 Memory Model — Pass-by-Value (Copies)
------------------------------------------------------------

main():
    Num1  → 10   (memory address: 0x1000)
    Num2  → 20   (memory address: 0x1004)

SwappingTwoNumbers(float Num1, float Num2):
    Num1  → 10   (memory address: 0x2000)   ← copy
    Num2  → 20   (memory address: 0x2004)   ← copy

   (Swapping occurs here, but only on the copies.)

------------------------------------------------------------
        🔍 Memory Model — Pass-by-Reference (Correct Swap)
------------------------------------------------------------

main():
    Num1  → 10   (0x1000)
    Num2  → 20   (0x1004)

SwappingTwoNumbers(float& Num1, float& Num2):
    Num1  → refers to address 0x1000  ← original
    Num2  → refers to address 0x1004  ← original

   (Swapping here modifies the real variables in main().)
*/
