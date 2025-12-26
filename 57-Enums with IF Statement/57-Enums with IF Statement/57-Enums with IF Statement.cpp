
#include <iostream>
using namespace std;

/* The program is as follows:
   
   ******************************************
   Please choose the number of your color ?
   (1) Red
   (2) Blue
   (3) Green
   (4) Yellow
   ******************************************
   
   Your Choice ?
   2

   (and the output is that your console will change color to the one you choose.)
*/

// Solution:
// A numerical value whose use is nothing but representing a color is in the code
// Therefore, it has to have a label. This can be done via enums.
// Enum rules: 1- create an enum user-defined data type. 
//             2- declare a variable of this data type 3
//             3- initialize this variable (directly or via reading user input)
// * Each rule is a natural progression of the one before it (common sense)


enum enColors {red = 1, blue = 2, green = 3, yellow = 4};

void PrintColorInstructions()
{
	cout << " ******************************************\n";
	cout << "Please choose the number of your color ? \n";
	cout << "(1) Red" << endl;
	cout << "(2) Blue" << endl;
	cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
	cout << " ******************************************\n \n";

}

void ReadColor(int &c) // passing by ref. // I am VIOLATING THE SRP as an imporant concept will be explained in the upcoming lecture.
{   
	cout << "Your Choice ?" << endl;
	cin >> c;
}

enColors CastingUserInputToEnum(int c) // فَرِّق تَسُدْ
{
	return (enColors)c;
}

void ProducingColor(const enColors &color)  // passing by const ref.
{
	if (color == enColors::blue) // without enums, I'd instead have  if (color == 2) where you'll always have to remember that 2 is blue (= impractical and produces bugs)
	{
		system("color 1F");  //changes the console color to blue (more details on that in the upcoming courses)
	}
	else if (color == enColors::green)
	{
		system("color 2F");
	}
	else if (color == enColors::red)
	{
		system("color 4F");
	}
	else if (color == enColors::yellow)
	{
		system("color 6F");
	}
	else
	{
		system("color 1F");
	}
}


int main()
{
	enColors color;

	PrintColorInstructions();

	//**Initializing the variable 'color' via reading user input:

	int c; // as you can not initilize an enum user-defined data type 'color' variable in a straight forward manner.
	ReadColor(c);
	// the variable 'c' is now initialized with the user input value.
	// Now, make the int value of c the value of the variable color (of enum user-defined data type) [done inside a fuction/procedure فَرِّق تَسُدْ]
	color = CastingUserInputToEnum(c);
	// Now, the variable 'color' is fully initialized with the numerical value (representing color) the user enters.

	//comparing the entered color number with the list of numbers:
	ProducingColor(color);


	return 0;
}


