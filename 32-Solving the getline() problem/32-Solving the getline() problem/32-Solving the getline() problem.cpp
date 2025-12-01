#include <iostream>
#include <string> // includes the getline() function.
using namespace std;


 /*
  Important:

   We have once encountered the issue of reading a string that contains a space. 

   For example, reading  "Adam Elina".
   As only "Adam" will be considered (the space and what comes after is not taken into account).

   string FullName;
   cin << FullName;            // let's say that user enters: Adam Elina
   cout << FullName << endl;  //Output: Adam

   
   let's have a look: ===>
*/

int main()
{
	string FullName;

	cout << "Enter your full name: \n";  
	cin >> FullName;                   // let us say user enters "Adam Elina"
	cout << "Your entered full name is: " << FullName << "." <<endl;     // output: Adam
	
	// so how to solve this problem ?!
	// Answer: For Strings, From now and on, use the following function instead:
	// 
	// getline(cin, FullName) //= get the whole string line. // ONLY applies to strings  // included in the #include <string> library

	return 0;
}
 
 
// Look at the code below:
int main()
{
	string FullName;

	cout << "Enter your full name: \n";  // let us say user enters "Adam Elina"
	getline(cin, FullName);
	cout << "The entered full name is: " << FullName << endl;  // Adam Elina

	return 0;
}
/* However, there exists a problem pertaining to the use of  getline() function WHEN THE PROGRAM ALSO USES cin. 
   This problem is represented in the following program
   which represents a classic C++ issue:-  */
   
 int main()
 {
	int number;
	string name;
	string country;

	cout << "Enter the number: \n";
	cin >> number; // you can NOT use getline() instead, as variable number is not a string.
	

	cout << "Enter the name: \n";
	getline(cin, name);  // instead of cin, so that a whole line containing a space can be read.

	cout << "Enter your country: \n";
	getline(cin, country); // instead of cin, so that a whole line containing a space can be read.

	cout << "Number: " << number << " | Name: " << name << " | country" << endl;

	return 0;
	/* The problem is that, you're mixing cin & getline(cin, ) together:
		Given that, 
	   when the execution of the program stops at   cin >> number;
	   waiting for the user to finish doing both: Entering a value && clicking on the enter button
			(so that the curson moves to the next line and the program resumes executing)
	 
	 The click on the enter button is saved as a value ! inside the all the next getline(s) in the program.
	 
	 
	          ⚡ Quick Rule to Fix such issues

                Rule:
                If you mix cin >> with getline(),
                👉 always use cin.ignore() right AFTER cin >>. 
    */
}   
 
// The fix: 
int main()
{
	int number;
	string name;
	string country;

	cout << "Enter the number: \n";
	cin >> number; // you can NOT use getline() instead, as variable number is not a string.
	cin.ignore(1, '\n'); // ALWAYS use this line after the cin line (NEVER after the getline(cin, variable))

	cout << "Enter the name: \n";
	getline(cin, name);  // instead of cin, so that a whole line containing a space can be read.
	
	cout << "Enter your country: \n";
	getline(cin, country); // instead of cin, so that a whole line containing a space can be read.
	cout << endl; 

	cout << "Number: " << number << " | Name: " << name << " | country: "<< country << endl;
	
	return 0;
}

/***************************** Proper top noch explanation for future review *****************************

*  /* The problem is caused by mixing cin >> and getline(cin, ...):

 * When the program stops at:
 *          cin >> number;
 *
 * It waits for the user to do BOTH actions:
 *      1. Enter a value
 *      2. Press the Enter key
 *
 * The important detail:
 *      cin >> number reads ONLY the number.
 *
 * BUT the Enter key (the '\n' newline character) is NOT consumed.
 * It remains in the input buffer.
 *
 * Therefore:
 *      The next getline(cin, ...) reads this leftover '\n'
 *      and immediately returns an EMPTY string.
 *
 * This is why getline() "skips" input when used after cin >>.
 */


/*
🧠 Mental Model(Simple)

 Think of the input buffer as a queue of characters.

 Example input :

 42⏎


 After cin >> number :

	42 is removed and stored in number

	⏎(newline) stays in the queue

	Then getline(cin, name) is called :

 It sees ⏎ immediately

 Thinks : “Oh, the line is empty”

 Returns name = ""

*/




