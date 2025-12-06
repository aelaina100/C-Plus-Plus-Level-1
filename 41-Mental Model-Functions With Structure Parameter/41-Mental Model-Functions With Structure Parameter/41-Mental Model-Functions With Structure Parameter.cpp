// 41-Mental Model-Functions With Structure Parameter.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

/* Mental Model:

 Whenever, inside main(), you find yourself calling a function or
 procedure with multiple related parameters, group these parameters
 into a structure. Or into more than one structure if the parameters
 form multiple logical groups.

 Declare structure variables in main().
 Each structure variable is to be passed as THE ONLY parameter
 to its dedicated input procedure.

 For every structure — even nested ones — create exactly one
 dedicated input procedure that uses pass-by-reference.

 Call these procedures in main() to keep the program clean,
 modular, and SRP-compliant.

*/



/*
#include <iostream>
#include <string>
using namespace std;

/* -------------------------
   Structures (defined outside main)
------------------------- */

//struct stAddress
//{
//    string city;
//    string street;
//};
//
//struct stPerson
//{
//    string name;
//    unsigned short age;
//    stAddress address; // nested structure
//};
//
///* -------------------------
//   Dedicated Input Procedures
//------------------------- */
//
//// Input procedure for stAddress
//void ReadAddress(stAddress& addr)
//{
//    cout << "Enter City: ";
//    getline(cin, addr.city);
//
//    cout << "Enter Street: ";
//    getline(cin, addr.street);
//}
//
//// Input procedure for stPerson
//void ReadPerson(stPerson& person)
//{
//    cout << "Enter Name: ";
//    getline(cin, person.name);
//
//    cout << "Enter Age: ";
//    cin >> person.age;
//    cin.ignore(1, '\n'); // clear buffer
//
//    // Read nested structure using its own procedure
//    cout << "\n-- Now enter address information --\n";
//    ReadAddress(person.address);
//}
//
///* -------------------------
//   Display Procedures (Optional, for demonstration)
//------------------------- */
//
//void PrintAddress(const stAddress& addr)
//{
//    cout << "City: " << addr.city << endl;
//    cout << "Street: " << addr.street << endl;
//}
//
//void PrintPerson(const stPerson& person)
//{
//    cout << "\n--- Person Information ---\n";
//    cout << "Name: " << person.name << endl;
//    cout << "Age: " << person.age << endl;
//
//    cout << "\n--- Address ---\n";
//    PrintAddress(person.address);
//}
//
///* -------------------------
//   MAIN PROGRAM
//------------------------- */
//
//int main()
//{
//    // Declare structure variable(s) in main()
//    stPerson person;
//
//    // Pass each structure variable as the only parameter
//    // to its dedicated input procedure
//    ReadPerson(person);
//
//    // Demonstration output
//    PrintPerson(person);
//
//    return 0;
//}