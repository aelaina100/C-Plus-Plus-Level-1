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

  A) FIXED inner loop
  --------------------------------
  The inner loop runs a fixed number of times,
  independent of the outer loop variable.

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
  The number of inner loop executions depends
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
      For every iteration of the outer loop,
      the body executes i times.

  --------------------------------

  Mental Shortcut:
  If inner condition is constant → fixed work → rectangular output
  If inner condition depends on i → growing work → progressive output
  ===============================
  */

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

