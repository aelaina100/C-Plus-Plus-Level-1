
#include <iostream>
using namespace std;

/* programming heavily depends on conditional statements
   For example, if a student's mark is over 50, I'd like to print "Pass"
                if its under 50, I'd like to print "Fail"

 Or if a student's mark is over 50, I would like to do one, two, or three things no matter what they are.
 All of this could be achieved via conditional statements.

 Another example:
 If you have a bachelor degree in Computer Science AND your average is over 80, then you will be hired.
 You tell your son that if he achieves a certain average, then you'd buy him a PlayStation.


 Here, we will look at 2 conditional statements:
 1- if statement.
 2- if..else statement.

 
*/

// 1-  if statement alone:
/* *******************************************************************************************************
*                                                                                                        *                                                                                                   *
*  if (Condition == True)           // Now, if the condition is true, then                               *
*  {                                //the body of the if code will be executed and once this is done     *
*    // Body of if code...          // the rest of the program code will be executed as well.            *
*  }                                                                                                     *
*                                                                                                        *
*  // Rest of the program code..                                                                         *
******************************************************************************************************* */


/* Examples:

 When Condition is True:                        When Condition is False:
 ***********************                        ************************
    int x = 10;                                    int x = 10;

   -- if (x > 5)                               __ if (x > 20)
   |  {                                        |  {
   |                                           |
   |__> // Code to be executed                 |   // Code to be executed (SKIPPED)
                                               |                                            |
      }                                        |  }
                                               |
     // Code after if..ALWAYS executed.        |__> // Code after if.. ALWAYS executed.

*/
// let us examine a few examples:

int main()
{
    int x = 10;

    if (x > 5)
    {
        cout << "The code of the if body has been executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}

// Another example: 
int main()
{
    int x = 10;

    if (x >= 5 && x <= 20) // if(true)
    {
        cout << "The code of the if body has been executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}

// Another example: 
int main()
{
    int x = 10;

    if (x >= 5 && x <= 8) // if(false)
    {
        cout << "The code of this if statement will NOT be executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}


// Another example: 
int main()
{
    int x = 10;

    if (x >= 5 || x <= 8) // if(true)
    {
        cout << "The code of the if body has been executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------

// 2-  if..else statement:   If the if condition is false, then the controller jumps to the else code block to execute it.
//     ALWAYS try to use:  if..else statement   instead of if statement alone.... so you do not forget any condition of any sort.
/* *******************************************************************************************************
*                                                                                                        *                                                                                                   *
*  if (Condition == True)                                                                                *
*  {                                                                                                     *
*    // if body executes.                                                                                *
*  }                            
*  else
*  {
*    // else body does NOT execute.
*  }
*
*                                                                                                        *
*  // Rest of the program code..                                                                         *
******************************************************************************************************* */


/* Examples:

 When Condition is True:                          When Condition is False:
 ***********************                          ************************
    int x = 10;                                      int x = 10;

   -- if (x > 5)                                 __  if (x > 20)
   |  {                                          |   {
   |                                             |
   |__> // if body code                          |    // if body code (SKIPPED)                                         |                                            |
                                                 |
      }                                          |   }
      else                                       |__> else                                          
      {                                              {
        // SKIPPED else body here                      // else body executes
      }                                              }
                                                
     // Code after if..else is ALWAYS executed      // Code after if..else is  ALWAYS executed.        

*/   
// let us examine a few examples:

int main()
{
    float x;

    cout << "Please enter a number: \n";
    cin >> x;
    cout << endl;


    if (x > 5)
    {
        cout << "This number is bigger than 5" << endl;
    }
    else
    { 
        cout << "This number is smaller than 5" << endl;
    }

    cout << "This block after the if..else statement is ALWAYS executed. \n";

    return 0;
}

// Another example: 
//  When logging in to my system, I want to check whether the entered password equals the correct stored one in my system.
//  I call my login function:

    //  If the password is correct, then the if statement block is executed where the message "Correct password" is printed out.
    
    //  If the password is false, then the else statement block is, instead, executed 
    //  with the message "You've entered the WRONG password" printed out.