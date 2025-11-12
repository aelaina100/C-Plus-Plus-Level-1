
/* Output the below information, exactly as it appears, utilizing Structures.

 *************************************
 Name: Ahmad El-Aina
 Age: 99
 City: Montréal
 Country: Canada
 Monthly Salary: 5000
 Yearly Salary: 60000
 Gender: M                          //Used to be of char data type. Now utilize the enum data type.
 Married:1                         // Change to Marital Status, deeming it either Single or Married using enums
 My Favourite Colour               // A new variable. Use enums
 ************************************* 


*/

#include <iostream>
using namespace std;

enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };
enum enFavouriteColor { White, Black, Blue = 9 };

int main()
{
	string name, city, country;
	unsigned short age;
	unsigned int MonthlySalary, YearlySalary;

	name = "Ahmad El-Aina";
	age = 99;
	city = "Montreal";
	country = "Canada";
	MonthlySalary = 5000;
	YearlySalary = 60000;
	enGender gender = enGender::Male; // stores 0 that is under the label ::Male
	enMaritalStatus MaritalStatus = enMaritalStatus::Single;
	enFavouriteColor FavouriteColor = enFavouriteColor::Blue; // stores 2 that is under the label ::Blue

	cout << "************************************* \n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << YearlySalary << endl;
	cout << "Gender [Male(0) & Female(1)]: " << gender << endl; //0
	cout << "Marital Status[Single(0) & Married(1)]: " << MaritalStatus << endl;    //0
	cout << "My Favourite Color: " << FavouriteColor << endl; // 9
	cout << "************************************* \n";


	return 0;

}


