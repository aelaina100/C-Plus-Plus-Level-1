// 68-Mental Model for nested For-Loops

 
/***************************************************************************
  Mental model for nested for-loops:

  As soon as you see:

      for (initialization; condition; update)
      {
          for (initialization; condition; update)
          {
              // body
          }
      }

  There are only TWO possible behaviors to reason about: 
   A) FIXED & INDEPENDENT inner loop.
   B) DEPENDENT inner loop.


  A) FIXED & INDEPENDENT inner loop
  --------------------------------
  The inner loop runs a FIXED number of times,
  INDEPENDENT of the outer loop variable.

  Example:
      for (int i = 1; i <= 10; i++)
      {
          for (int j = 1; j <= 8; j++)
          {
              // body
          }
      }

  - For i = 1 → body executes 8 times
  - For i = 2 → body executes 8 times
  - For i = 3 → body executes 8 times
  - ...

  Outcome:
  - The output is uniform and rectangular
  - Each outer iteration produces the same amount of work
  - Total executions = 10 × 8 = 80

  Rule:
      For every iteration of the outer loop,
      the body executes the SAME number of times.

  --------------------------------

  B) DEPENDENT inner loop
  --------------------------------
  The number of inner loop executions DEPENDS
  on the outer loop variable.

  Example:
      for (int i = 1; i <= 10; i++)
      {
          for (int j = 1; j <= i; j++)
          {
              // body
          }
      }

  - For i = 1 → body executes 1 time
  - For i = 2 → body executes 2 times
  - For i = 3 → body executes 3 times
  - ...

  Outcome:
  - The output grows progressively
  - Each outer iteration produces more work than the previous one
  - Common shapes: triangle, staircase, pyramid
  - Total executions increase non-linearly (1 + 2 + 3 + ...)

  Rule:
      For every iteration i of the outer loop,
      the body executes i times.

  --------------------------------

  Mental Shortcut:
  If inner condition is constant → fixed work → rectangular output
  If inner condition depends on i → growing work → progressive output
  ===============================
  */


 /*
     A)         B)            C)
     ****       1 2 3 4       *
     ****       1 2 3         * *
     ****       1 2           * * *
     ****       1


  Mental Model (Nested for-loops):

  1) The number of horizontal lines (rows), regardless of their content,
     equals the TOTAL number of iterations of the OUTER for-loop.

     For A: you start from 1 to 4 ?  or 4 to 1 ? 
            So the outer for-loop for A is:   for (int i = 1; i <= 4; i++)

     For B: you start from 1 to 4 ? or 4 to 1 ?  Answer: 4 to 1 as the output grows / de-grows progressively.
            So the outer for-loop for B is:   for (int i = 4; i >= 1; i--)

     For C: you start from 1 to 3 ? or 3 to 1 ? 
            So the outer for-loop for C is:    for (int i = 1; i <= 3; i++)



  2) Within each horizontal line (row),
     each single printed element ( *, number, or symbol )
     is the RESULT of ONE iteration of the INNER for-loop.
 
    start by asking if the inner-loop independant or dependant ?

    For A: It's independent as the output is uniform & rectangular
           So the inner for-loop for A is: for (int j = 1; j <=4; j++)
    
    For B: It's dependant as the output de-grows progressively.
           So the inner for-loop for B is: for (int j = 1; j <=i; j++)

    For C: It's dependant as the output grows progressively ?
           So the inner for-loop for C is: for (int j = 1; j <=i; j++)
 
 */

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

