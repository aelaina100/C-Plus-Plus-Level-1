

#include <iostream>;
using namespace std;

/* Arrays with Functions: 


 Sending arrays to functions or procedures.

 Start looking at the following code, 
 
 by first collapsing all functions and procedures
*/


void ReadArrayData(int x[3]) // by-reference automatically for Array parameters. '&' will cause syntax errors. (= Initializing inside main())
{
	cout << "Please Enter The First Number: \n";
	cin >> x[0];
	cout << endl;

	cout << "Please Enter the Second Number: \n";
	cin >> x[1];
	cout << endl;

	cout << "Please Enter the Third Number: \n";
	cin >> x[2];
	cout << endl;

}

void PrintArrayData(int x[3])
{
	cout << "********************************\n";
	cout << "The Entered First Number is: "  << x[0] << endl;
	cout << "The Entered Second Number is: " << x[1] << endl;
	cout << "The Entered Third Number is: "  << x[2] << endl;
	cout << "********************************\n"; 

}


int main()
{
	int x[3]; // declaring an int array variable of 3 elements.

	ReadArrayData(x); // passing the array as an argument. It will be sent along with its memory address. hence, no need for & in the parameters of the function implementation.
	// mission complete- The array has been populated with elements.

	PrintArrayData(x); // passing the array as an argument. It will be sent along with its memory address. hence, no need for & in the parameters of the function implementation.

	return 0;
   
}


