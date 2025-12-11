
#include <iostream>
#include <string>
using namespace std;
// *******************************THIS IS ONE OF THE MOST IMPORTANT EXAMPLES EVER IN PROGRAMMING *******************************
//            AGAIN- This is NOT the final solution as more advanced but still very basic concepts will be introduced in the upcoming lessons.


/* Write a program to output exactly the following:



 **************************************
 First Name: Ahmad
 Last Name: El-Aina
 Age: 150 years old.
 Phone: (512) 555-9999
 **************************************

 **************************************
 First Name: Ana
 Last Name: Duduk
 Age: 30 years old.
 Phone: (530) 111-8888
 **************************************




*/

// AGAIN- This is NOT the final solution as more advanced but still very basic concepts will be introduced in the upcoming lessons.
struct stPersonalInfo
{
    string FirstName;
    string LastName;
    unsigned short age;
    string telephone;
};


void ReadPerson1Info(stPersonalInfo& PersonalInfo) // The 1st element of the array is sent here instead of the whole array. This element data type is the same as that of the array
{                                                  // & is added for passing by reference. Parameter (stPersonalInfo PersonalInfo[0]) is WRONG = telling the compiler
    cout << "Enter First Name: \n";                // to create an array containing no elements.
    getline(cin, PersonalInfo.FirstName);
    cout << endl;

    cout << "Enter Last Name: \n";
    getline(cin, PersonalInfo.LastName);
    cout << endl;

    cout << "Enter age: \n";
    cin >> PersonalInfo.age;
    cin.ignore(1, '\n');
    cout << endl;

    cout << "Enter Telephone Number: \n";
    getline(cin, PersonalInfo.telephone);
    cout << endl << endl;
}

void ReadPerson2Info(stPersonalInfo& PersonalInfo) //فَرِّق تَسُد// The 2nd element of the array is sent here instead of the whole array.
{
    cout << "Enter First Name: \n";
    getline(cin, PersonalInfo.FirstName);
    cout << endl;

    cout << "Enter Last Name: \n";
    getline(cin, PersonalInfo.LastName);
    cout << endl;

    cout << "Enter age: \n";
    cin >> PersonalInfo.age;
    cin.ignore(1, '\n');
    cout << endl;

    cout << "Enter Telephone Number: \n";
    getline(cin, PersonalInfo.telephone);
    cout << endl << endl;
}

void ReadPersonsRecords(stPersonalInfo PersonalInfo[2]) //فَرِّق تَسُد
{
    ReadPerson1Info(PersonalInfo[0]); //فَرِّق تَسُد// Only pass the 1st element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
    ReadPerson2Info(PersonalInfo[1]); //فَرِّق تَسُد// Only pass the 2nd element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
}

void PrintPerson1Info(stPersonalInfo PersonalInfo) //the argument received is the first element of the array (Not the array itself) and its of type stPersonalInfo 
{                                                   // typing  stPersonalInfo PersonalInfo[0] iS WRONG = you are declaring an array with no elements.
    cout << "**************************************\n";
    cout << "First Name: " << PersonalInfo.FirstName << endl;
    cout << "Last Name: " << PersonalInfo.LastName << endl;
    cout << "Age: " << PersonalInfo.age << " years old." << endl;
    cout << "Phone: " << PersonalInfo.telephone << endl;
    cout << "**************************************\n\n";
}

void PrintPerson2Info(stPersonalInfo PersonalInfo)
{
    cout << "**************************************\n";
    cout << "First Name: " << PersonalInfo.FirstName << endl;
    cout << "Last Name: " << PersonalInfo.LastName << endl;
    cout << "Age: " << PersonalInfo.age << " years old." << endl;
    cout << "Phone: " << PersonalInfo.telephone << endl;
    cout << "**************************************\n\n";
}

void PrintPersonsRecords(stPersonalInfo PersonalInfo[2]) //فَرِّق تَسُد
{
    PrintPerson1Info(PersonalInfo[0]); //فَرِّق تَسُد// Only pass the 1st element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
    PrintPerson2Info(PersonalInfo[1]); //فَرِّق تَسُد// Only pass the 2nd element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
}

int main()
{
    stPersonalInfo PersonalInfo[2];

    //Initialization via user input.
    ReadPersonsRecords(PersonalInfo); // argument passed along with the array's address in memory. //فَرِّق تَسُد

    // Now, the array PersonalInfo[2] initialization is complete.
    PrintPersonsRecords(PersonalInfo);


    return 0;
}


