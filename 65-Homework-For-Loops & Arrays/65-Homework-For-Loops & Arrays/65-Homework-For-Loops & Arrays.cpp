
#include <iostream>
using namespace std;

/* Write a program to output exactly the following:


 Person 1 Info:
 **************************************
 First Name: Ahmad
 Last Name: El-Aina
 Age: 150 years old.
 Phone: (512) 555-9999
 **************************************

 Person 2 Info:
 **************************************
 First Name: Ana
 Last Name: Duduk
 Age: 30 years old.
 Phone: (530) 111-8888
 **************************************

 person x info:
 **************************************
 etc. 
 etc.
 etc.


*/


struct stPersonalInfo
{
    string FirstName;
    string LastName;
    unsigned short age;
    string telephone;  
};

void ReadArrayData(int &NumberOfRecords, stPersonalInfo PersonalInfo[100]) // arrays are already passed by ref. Inclusing the & symbole will cause an exception to be thrown.
{
    cout << "Enter the number of records to store: \n";
    cin >> NumberOfRecords;
    cout << endl;

    for (int i = 0; i < NumberOfRecords; i++)
    {
        cout << "Person 1 Info: " << endl << endl;
        cout << "Enter the First Name: \n";
        cin >> PersonalInfo[i].FirstName;
        cout << "Enter the Last Name: \n";
        cin >> PersonalInfo[i].LastName;
        cout << "Enter the age: \n";
        cin >> PersonalInfo[i].age;
        cout << "Enter Telephone Number: \n";
        cin >> PersonalInfo[i].telephone;
        cout << endl << endl; 
    }
}

void  PrintArrayData(const int &NumberOfRecords, const stPersonalInfo PersonalInfo[100])
{
    for (int i = 0; i < NumberOfRecords; i++)
    {
        cout << "Person " << i + 1 << " info:" << endl;
        cout << "************************************** \n"; 
        cout << "First Name: " << PersonalInfo[i].FirstName << endl;
        cout << "Last Name: " << PersonalInfo[i].LastName << endl;
        cout << "Age: " << PersonalInfo[i].age << " years old." << endl;
        cout << "Phone: " << PersonalInfo[i].telephone << endl;
        cout << "************************************** \n \n";

    }
}

int main()
{
    int NumberOfRecords;
    stPersonalInfo PersonalInfo[100]; // reserving 100 memory spaces (100 records) for the array that are, at this moment, empty.

    // Initializing the variable 'ElementCount' & 'PersonalInfo' via reading user-input:
     // (user decides how many elements the array will store and then storing these elements)
    ReadArrayData(NumberOfRecords, PersonalInfo);
    // Both variables are now initialized.

    PrintArrayData(NumberOfRecords, PersonalInfo);

     return 0;
}

