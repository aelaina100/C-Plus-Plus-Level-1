

#include <iostream>
using namespace std;

/* Nested for-loops: meaning for-loops inside each other.
   As you remember, the syntax has been:


   for (initialization; condition; update)
   {
      // body
   }
   
   so the body of the for-loop could be any line(s) of code no matter what they are.
   Therefore, one could also place another for-loop inside.
   so that we have:


    for (initialization; condition; update)
   {
       for (initialization; condition; update)
          {
              // body
          }
   }



   How it works:



    for (int i = 0; i < 10; i++)     

       for (int j = 0; j < 8; j++)  
          {
              cout << "Ahmad El-Aina";
          }
   }

   // For every single iteration of the outer loop,
  // "Ahmad El-Aina" is printed 8 times.

  // so "Ahmad El-Aina" will be printed 10 * 8 = 80 times
   
   We could also place a third nested for-loop (let us say of 10 iterations) so that it is 10 * 8 * 10
   
   But all of this according to logic and what is needed or how you'd think about it.

   Let us see a few examples:


*/

//// Predict the outcome.
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "i = " << i << endl;

        for (int j = 1; j <= 10; j++)
        {
            cout << i << "*" << j << " = " << i * j << endl; // fixed i value with the varying j on each single nested iteration.
        }
        cout << "--------------------------\n";
    }

    return 0;
    // ** for every outerloop iteration, we took advantage of the associated i value to multiply it with each value of j=1 through j=10
    // so this is the program for the multiplication table !
    // Every single time the inner loop finishes its iterations, a straight line is printed out.
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// Predict the outcome
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
    /* output:
       
          **********
          **********
          **********
          **********
          **********
          **********
          **********
          **********
          **********
          **********
    

      - this is 10 * 10
      - number of elements in a row represents the inner for-loop
      - number of elements in a column represents the outer for-loop.

      Outer loop = how many lines (rows)
      ✔ The total number of rows represents ALL iterations of the outer loop.
      

      Inner loop = how many characters per line.
      ✔ The total number of characters represents ALL inner loop iterations.

      A source of confusion for many:
      Inner loops are not to be associated with "columns",
      as "columns" here is often misunderstood as a fixed number of columns,
      instead of the fact that the inner loop represents
      the number of columns per row.

      Here, saying “inner loop = columns” without context becomes misleading.

    */
    
//} ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Now the condition for the nested for-loop does NOT have to be fixed as it can be i dependant:
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/* Explanation: 

 for i = 1, 
 a star is printed one time, followed by the cursor jumping on the next line.

 for i = 2,
 a star is printed two times on the new line, followed by the cursor jumping on the next line.

 for i = 3,
 a star is printed 3 times on the new line, followed by the cursor jumping on the next line.

 and so on till eventually, 10 stars are printed out on the last line.

 Therefore, a right-angle triangle is formed.

 // so the ranges of the inner for-loop can be dependant on the outer for-loop.

*/




 