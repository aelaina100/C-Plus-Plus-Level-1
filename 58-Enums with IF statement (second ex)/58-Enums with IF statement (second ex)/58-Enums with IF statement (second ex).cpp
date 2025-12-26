
#include <iostream>
using namespace std;

/* The program is as follows:


   ******************************************
   Please choose the number of your country ?
   (1) Jordan
   (2) Tunisia
   (3) Oman
   (4) Egypt
   (5) Iraq
   (6) other
   ******************************************

   Your Choice ?
   2

   Tunisia
*/


/* Solution:
* so an integer number is used in the program where it ONLY represents something (a country in this case)
* where it is not used in any arithmetic operation.
* Therefore, start the program by creating an enum user-defined data type and go from there.
* 
*  */



enum enCountries { Jordan = 1, Tunisia = 2, Oman = 3, Egypt = 4, Iraq = 5, other = 6 };

void PrintCountryChoiceInfo()
{
	cout << " ****************************************** \n";
	cout << " Please choose the number of your country ? \n";
	cout << "(1) Jordan" << endl;
	cout << "(2) Tunisia" << endl;
	cout << "(3) Oman" << endl;
	cout << "(4) Egypt" << endl;
	cout << "(5) Iraq" << endl;
	cout << "(6) other" << endl;
	cout << " ****************************************** \n \n";
}

void ReadCountries(int& c) // passing by reference.
{
	cout << "Your choice ?" << endl;
	cin >> c;
	cout << endl;
}

enCountries CastingFromIntToEnum(int c) // passing by value.
{
	return (enCountries)c;
}

enCountries SelectCountry(const int& c, const enCountries& countries) // passing by const ref for both parameters
{
	switch (c)
	{
	case enCountries::Jordan:
			return enCountries::Jordan; // = return 4 and 4 is an int
			break;

	case enCountries::Tunisia:
		return enCountries::Tunisia;
		   break;

	case enCountries::Oman:
		return enCountries::Oman;
			break;
	
	case enCountries::Egypt:
		return enCountries::Iraq;
			break;
     
	case enCountries::Iraq:
		return enCountries::Iraq;
			break;
	
	case enCountries::other:
		return enCountries::other;
			break;

	//default:
		//return "";

	}
}

int main()
{
	PrintCountryChoiceInfo();

	enCountries countries; // only declare a variable when its indeed needed so that it is initialized as quickly as possible.
	//Initiallizing 'countries' variable via user-input.

	int c; // because we can NOT initialize an enum user-defined data type in a straight-forward manner.
	ReadCountries(c);
	// Now, 'c' has been initialized.

	c = CastingFromIntToEnum(c); // casting first since c will be compared to a group of enum user-defined data types.

	countries = SelectCountry(c,countries);





	// Now, the goal is to assign the value of 'c' to variable 'countries'.
	// However, they are of different data types. And even though we can simply say countries = c; (implicit data type conversion)
	// , its preferred to always do so explicitly (casting). Either way this is done inside a function ( فَرِّق تَسُد)
	// as opposed to procedures that are reserved for reading (user -input) or printing
	countries = CastingFromIntToEnum(c);

	cout << countries << endl;



	return 0;
}


