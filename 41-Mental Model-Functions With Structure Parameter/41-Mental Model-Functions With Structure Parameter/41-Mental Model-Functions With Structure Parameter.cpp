// 41-Mental Model-Functions With Structure Parameter.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
 
#include <iostream>
#include <string>
using namespace std;

/* Mental Model:

   In main(), if the variables that are to be declared are logically related,
   then they must be declared as member variables inside one or more structures.

   The user-defined data type (structure) that will be used to declare the
   variable(s) inside main() is:
     - EITHER the structure that *nests* other structures
       (in which case the nested structures are NOT used as data types
        for declaring variables in main()),
     - OR a structure that is *independent* (not nesting and not nested),
       in which case an additional variable is declared for each independent group.

   In main(), structure member variables can be initialized:
   1- Directly.
      or
   2- Via user input:
      In this case, create ONE dedicated input procedure for EVERY structure
      — فَرِّق تَسُد (Divide & Conquer) — whether the structure is nesting
        or nested.

      Each structure variable is to be passed as THE ONLY parameter to
      its corresponding input procedure (pass-by-reference).
      

      This is an example:

*/


/* -------------------------
   Structures (defined outside main)
------------------------- */

struct stAddress
{
    string city;
    string street;
};

struct stPerson
{
    string name;
    unsigned short age;
    stAddress address; // nested structure
};

/* -------------------------
   Dedicated Input Procedures
------------------------- */

// Input procedure for stAddress
void ReadAddress(stAddress& addr) // Instead of (stPerson &person) which is also correct
{                                 // but makes accessing the member variables in stAddress longer: [person.address.city] instead 
    cout << "Enter City: ";       // of accessing the stAddress structure directly.
    getline(cin, addr.city);     // This follows the Single Responsibility Principle
                                // and فَرِّق تَسُد (Divide & Conquer).

    cout << "Enter Street: ";
    getline(cin, addr.street);
}

// Input procedure for stPerson
void ReadPerson(stPerson& person)
{
    cout << "Enter Name: ";
    getline(cin, person.name);

    cout << "Enter Age: ";
    cin >> person.age;
    cin.ignore(1, '\n'); // clear buffer

    // Read nested structure using its own procedure
    cout << "\n-- Now enter address information --\n";
    ReadAddress(person.address);
}

/* -------------------------
   Display Procedures (Optional, for demonstration)
------------------------- */

void PrintAddress(const stAddress& addr)
{
    cout << "City: " << addr.city << endl;
    cout << "Street: " << addr.street << endl;
}

void PrintPerson(const stPerson& person)
{
    cout << "\n--- Person Information ---\n";
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;

    cout << "\n--- Address ---\n";
    PrintAddress(person.address);
}

/* -------------------------
   MAIN PROGRAM
------------------------- */

int main()
{
    // Declare structure variable(s) in main()
    stPerson person;

    // Pass each structure variable as the only parameter
    // to its dedicated input procedure
    ReadPerson(person);

    // Demonstration output
    PrintPerson(person);

    return 0;
}