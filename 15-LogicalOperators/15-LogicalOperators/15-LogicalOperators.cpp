
/*
    Given:
        bool A = 1;   // same as typing  bool A = true;
        bool B = 0;  // same as  typing bool B = false;

    // Either way, what will be stored and displayed is 1 or 0 for A and B.

| **Logical Operator** | **Description**                              | **Example** (A & B values are given above)   | **Stored/Displayed RESULT**  |
| -------------------- | -------------------------------------------- | -------------------------------------------- | ---------------------------- |
| &&                   | Called Logical AND Operator.                 | (A && B) → (true && false) = false           | 0                            |
|                      | Both CONDITIONS must be true,                | (A && true) → true && true = true            | 1                            |
|                      | so that the RESULT (boolean) is true.        |                                              |                              |
|                      |                                              |                                              |                              |
| ||                   | Called Logical OR Operator.                  | (A || B) → (true || false) = true            | 1                            |
|                      | One of the CONDITIONS must be true           | (false || false) = false                     | 0                            |
|                      | so that the RESULT (boolean) is true.        |                                              |                              |
|                      |                                              |                                              |                              |
| !                    | Called Logical NOT Operator.                 | !(A && B) → !(true && false) = !false = true | 1                            |
|                      | It reverses the RESULT (boolean) state.      | !(A || B) → !(true || false) = !true = false | 0                            |
-----------------------------------------------------------------------------------------------------------------------------------------------------

Tip:
    Always resolve both sides of the operator to true/false so the final result (boolean type) becomes:
        - true  → stored as 1 in memory 
        - false → stored as 0 in memory
*/


#include <iostream>
using namespace std;

//int main()
//{
//    bool A = 1, B = 0;
//
//    cout << (A && B) << endl;  //0
//    cout << (A || B) << endl;  //1
//    cout << !A << endl;        //0
//    cout << !B << endl;        //1
//    cout << !(A && B) << endl; //1
//    cout << !(A || B) << endl << endl; //0
//    
//    return 0;
//}

// But for readability, we modify the above program to:
//int main()
//{
//    int A = 1, B = 0;
//
//    cout << "(" << A << " && " << B << " ) = " << (A && B) << endl;  // (1 && 0) = 0
//    cout << "(" << A << " || " << B << ") = " << (A || B) << endl;   // (1 || 0) = 1
//    cout << "!" << B << " = " << !B << endl;                         // !0 = 1
//    cout << "!(" << A << " && " << B << ") = " << !(A && B) << endl; // !(1 && 0) =1
//    cout << "!(" << A << " || " << B << " ) = " << !(A || B) << endl << endl; // !(1 || 0 ) =0
//    
//   // and if I want to store the RESULT of (A && B) & then printing it out on the screen:
//    bool Result = (A && B);
//    cout << "Printing some result: " << Result << endl << endl;
// 
//    return 0;
//}
 ////---------------------------------------------------------------------------------------------------
 

/*  Exercise-  Without coding, solve the following expression:

          NOT(5 > 6 OR 7 = 7) AND NOT(1 OR false)
         → NOT(false OR true) AND NOT(true OR false)
         → NOT(true) AND NOT(true)
         → false AND false
  Result → false  → stored as 0 in memory and printed out as 0 using cout.
*/


/*  Exercise- HardCode the following expression (No user input) and print out the result

          NOT(5 > 6 OR 7 = 7) AND NOT(1 OR false)
 */
     
//int main()
//{
//    bool result = !(5 > 6 || 7 == 7) && !(1 || false);
//    cout << result << endl;
//
// return 0;
// // The main takeaway:
//   // 7 = 7 will NOT compile because '=' is the assignment operator.
//   // '==' is the equality (comparison) operator (used to compare values) 
//   // and it returns true or false.
//
//   // The assignment operator = is what we use to initialize or update variables,
//   // (Not compare values) and 
//   // using it here as 7 = 7 does not make sense
//}
 ////---------------------------------------------------------------------------------------------------
 

  