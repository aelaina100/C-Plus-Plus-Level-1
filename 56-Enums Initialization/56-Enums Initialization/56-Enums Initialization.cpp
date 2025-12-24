
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

void ReadColor(enColor &color)
{
	int c; // First declare an int variable (as one can NOT initialize 'color' straight-forwardly from by cin >>)
	cout << "Enter the number of your favourite color ( red =1, blue = 2, green = 3, yellow = 4): " << endl;
	cin >> c;
	color = (enColor)c; // convert the c from int to enColor data type and lastly store it in 'color' to achieve initialization in main.

}  
 


int main()
{
	enColor color;

	// Initialization via user input:
	ReadColor(color);

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