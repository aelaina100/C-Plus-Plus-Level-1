// 41-Mental Model-Functions With Structure Parameter.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
 ***************** Under construction ***************

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
 dedicated input procedure that uses pass-by-reference.  فَرِّق تَسُد (Divide & Conquer).

 Call these procedures in main() to keep the program clean,
 modular, and SRP-compliant.

*/

/* UPDATE AS OF December 6th: The above mental model is NOT good. Instead, 
* this is the correct one^based on chat gpt conversation:

 QUESTION: 
 so even if I do not even need a function or procedure in my entire program, I should create a
 structure to group related variables together instead of just declaring them in main as variables
 prior to initialization


 ⭐ YES — 100% YES.

Even if your entire program has no functions at all, you should still create a structure whenever several variables logically belong together.
 (instead of the usual variable declaration in main:    int this  string that ). If variables are to be initialized via user input
 then each structure will have its own dedicated input procedure.. and now continue from here.

 aslo mentio^n, then you create a variable of the structure that is going to be the argument of the procedure called to initialize member variables of the 
 struct via user inpout....create a wholesome mental model.


 add at the end: this line of thinking avoids us calling functions in main with 2 params or more. As this makes readbility harder in comparison to passing
 one structure variable to the procedure 
And this is not optional — this is proper program design.

Let me explain this clearly and powerfully.

 ✅ THE CORE RULE
If multiple variables describe one “thing,” they belong in a struct — even if no functions are used.

This is how professionals think.

🧍‍♂️ Example WITHOUT struct (bad style)

string name;
int age;
string city;
string country;
float salary;
char gender;
bool married;

 This looks like random variables floating around.
It's unclear that they belong to the same person.

👤 Example WITH struct (correct)
stUserInfo person;




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