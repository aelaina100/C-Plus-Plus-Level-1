
#include <iostream>
using namespace std;

/* Enums Initialization
   
   Initialization, in general, can be achieved:
   A- Directly.
   B- Or via reading user input.
*/


//A:
enum enMaritalStatus {single = 0, married = 1};


int main()
{
	enMaritalStatus MaritalStatus;

    // Direct initialization:
	MaritalStatus = enMaritalStatus::single; // stores 0

}
//----------------------------------------------------------------------------------------------


//B:

enum enColor { red =1, blue = 2, green = 3, yellow = 4 };

void ReadColor(int c)
{
	cout << "Enter the number of your favourite color ( red =1, blue = 2, green = 3, yellow = 4): " << endl;
	cin >> c;
	cout << endl;
}  
 
enColor CastIntegerToEnum(int c) //passing by value.
{
	return (enColor)c; // convert the c from int to enColor data type and lastly store it in 'color' to achieve initialization in main.
}

int main()
{
	enColor color;

	// Initialization of variable 'color' via user input:

	int c; // First declare an int variable (as one can NOT initialize 'color' straight-forwardly from by cin >>)
	ReadColor(color);
	// c is now initialized

	// make c the value of 'color':

	// but first convert the data type of c from int to enColor. (Farrik Tasud)
	color = CastIntegerToEnum(c);
    // The initialization of the variable 'color' has finally been achieved.

	//Important: 
	// Now, this user-input initialized value will be compared to the int value inside line 30. (add to note: after the phrase "will be compared to the" is FIXED)
	// but these int values will hidden behind the labels of enColor::red ,  enColor::blue , enColor::green , etc
	// and that is WHY ENUMS ARE USEFUL

	// cuz without enums   this user-input initialized value will be compared directly to the int values of 1 2 3 and 4 which
	// is impossible to remember what they represent especially that our project will have 1000 lines of code and bugs will be the result

	

	return 0;
}


// Explaining: color = (enColor)c;

// Compiler-level reasoning:
//
// 1️⃣ The expression '(enColor)c' is evaluated first.
//    - 'c' is an integer value entered by the user.
//    - '(enColor)' is an explicit C-style cast.
//    - This instructs the compiler to explicitly convert the integer value
//      of 'c' into the enum user-defined data type 'enColor'
//      (no validation against enum members is performed).
//
// 2️⃣ After the explicit cast is complete,
//    the resulting enum-typed value is assigned to the variable 'color',
//    which is declared as type 'enColor'.


/*
 Will implicit conversion lead to a compilation error?
✅ Yes.

Is it because a user-defined data type is used?
✅ Exactly.

*/