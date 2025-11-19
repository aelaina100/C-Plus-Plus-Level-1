
#include <iostream>
#include <cmath>
using namespace std;


/* Previously, we mentioned that there is a difference between a procedure and a function.

   ✔ A procedure does NOT return a value — that is why its return type is `void`.

   ✔ A function, on the other hand, MUST return a value, and therefore its return type 
     matches the type of the value it returns (int, double, string, char, etc.).

   In summary:
   - Procedure  → return type = void → no value returned.
   - Function   → return type = data type of the returned value.

   ✔ Both procedures and functions must be created *outside* the main() function.
*/


/*
  When a function returns a value, the function call evaluates to that value.
  However, this returned value is not stored anywhere unless you assign the
  function call to a variable.
*/

// Example # 1---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()  // This is a procedure (return type = void)
{
    cout << "This is my first function; it got executed" << endl;

}

string MyFunction2() // This is a function (must return a value)
{
    // You may write as many lines of code as you want here before the return statement.
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int main()
{
    MyFunction(); // Calling the procedure: executes the line(s) of code inside MyFunction().

    MyFunction2();
    // Calling the function. It does two things: 
    // 1- Executes the line(s) of code—if any are present—before the return statement.
    // 2- Then, MyFunction2() evaluates to the returned value.
    //
    // However, in this call, the returned value is NOT captured.

    // So in order to capture the returned value, write instead:
    string ReturnedValue = MyFunction2();

    // And then you can either print it to the screen, or use it later in the program.
    cout << ReturnedValue << endl;

    // Unless you simply want to print it directly to the screen:
    cout << MyFunction2() << endl;
    // But capturing it first and then printing it is more elegant and leads to easier maintenance,
    // since the stored value can be reused if additional lines of code are added in the future.

    return 0;
 
    /*  Regarding MyFunction2(), or any other function:

    A function always returns EXACTLY ONE SPECIFIC VALUE.
    This is the same behavior as built-in functions such as:
        .round(), .floor(), .ceiling(), etc.,
    each of which returns one—and only one—specific result
    that we can later use further.

*/
   
}




// Example # 2--------[Building on the notes from Example #1]----------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()  
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2() 
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int MyFunction3()
{
 int x = 10;
 int y = 20;

 return x * y;
}



int main()
{
    int result;
    result = MyFunction3();  // You are calling the function and capturing (storing) its return value in an int variable called 'result'.

    cout << result << endl;
   
    return 0;
}





// Example # 3---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int MyFunction3()
{
    int x = 10;
    int y = 20;

    return x * y;
}



int main()
{
    int result;
    result = MyFunction3() + 50;  

    cout << result << endl;

    return 0;
}




// Example # 4---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int MyFunction3()
{
    int x = 50;
    int y = 2;

    return x * y;
}



int main()
{
    int result;
    result = MyFunction3() / 3;  // remember: this is an integer division

    cout << result << endl; // Hence, 33

    return 0;
    /*
     Important: if result is defined as float, then 33 is still printed.
    */
} 




// Example # 5---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


float MyFunction3()
{
    float x = 10.5;
    float y = 20.3;

    return x * y; //213.15
}



int main()
{
    float result;
    result = MyFunction3();  

    cout << result << endl;  //213.15

    return 0;
}






//// Example # 6---------------------------------------------------------------------------------------------
////---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


float MyFunction3()
{
    float x = 10.5;
    float y = 20.3;

    return x * y; //213.15
}



int main()
{
    int result;
    result = MyFunction3();  // an implicit conversion is performed

    cout << result << endl;  //213

    return 0;
}





// Example # 7---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


float MyFunction3()
{
    float x = 10.42;
    float y = 20.8;

    return x * y; //216.736
}



int main()
{
    float result;

     ////Now, for whatever reason in your program, 
     ////say that you want the returned value of MyFunction3() floored,
     ////before you process it any further.
    result = floor(MyFunction3());  

    cout << result << endl;  //216

    return 0;
}
