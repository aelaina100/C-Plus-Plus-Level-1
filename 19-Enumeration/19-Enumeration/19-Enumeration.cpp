
#include <iostream>
using namespace std;

 /* Enumeration (تَعْدَاد) : A user-defined data type.
   --------------------------------------------------------------
   An enumeration (تَعْدَاد) is used to group together several
   related descriptive constant values, each representing a member
   (or label) of that enumeration.

   Each member automatically receives an INTEGER VALUE, starting
   from index 0, unless otherwise specified by the user.

   Why?
   ----
  To replace hard-coded numbers with meaningful human-readable NAMES.

   For example:
       Inside a robot navigation system, the integer value 113 might represent the east direction.
       Rather than forcing the developer to remember that 113 corresponds to "East",
       we can simply assign that value to a named constant called East.

       That way, in the future, the code can read:

           if (direction equals East)
           {
               // Move the robot eastward.
           }

       — without ever needing to recall or explicitly mention that 113 was assigned to East.
 

   Examples on Assigning integer values, that will be used in our program, to descriptive constant values:

	Example #1:    In our program, we find out that 566 is equivalent to North, 100 to South, 113 to East, 690 to South.
	___________    Us developers, do not have to memorize each number representing its respective direction.
				   Instead, assign these integer values to their respective related constant member values
   
	   enum EnDirection { North = 566 , South = 100 , East = 113 , West = 690 }; 
	   // The descriptive constant member values being 'North', 'South', 'East', & 'West'.

   So:
	   North = 566   
	   South = 100   
	   East  = 113
	   West  = 690  
   __________________________________________________________________________________________________

   Example #2: 
   -----------
	   enum EnDirection { North , South , East = 113 , West }; // The descriptive constant member values being 'North', 'South', 'East', & 'West'.
	  
   So:
	   North = 0   * Automatically assigned int value.
	   South = 1   * Automatically assigned int value.
	   East  = 113  
	   West  = 114  * Automatically assigned int value.
   __________________________________________________________________________________________________

	Example #3:
   ------------
	enum EnDirection { North, South, East, West };  // The descriptive constant member values being 'North', 'South', 'East', & 'West'.
	  
   So:
	   North = 0    * Automatically assigned int value.
	   South = 1    * Automatically assigned int value.
	   East  = 2    * Automatically assigned int value.
	   West  = 3    * Automatically assigned int value.

   Conceptually:
   -------------
   An Enum is like a STRUCTURE, except:
   - A structure groups RELATED VARIABLES of *different* data types.
   - An enumeration groups RELATED CONSTANT DESCRIPTIVE VALUES each represented internally (by default) or explicitly by an integer.

   When you create a variable of an enumeration type, that variable can only hold ONE of the defined members of that Enum data type:

   Example #4:
   --------
   EnDirection Direction; 
   Direction = EnDirection::South;  // stores 112 // The variable 'Direction' can only take one of the four defined enum members.
                                    
*/

enum EnColor { Red = 620 , Blue, Yellow, Pink };   
enum EnDirection { North, South = 29 , East, West };
enum EnWeek { Monday, Tuesday = 290, Wednesday, Thursday = 734, Friday, Saturday, Sunday };
enum EnGender { Male, Female };
enum EnMaritalStatus { Single, Married };
enum EnStatus { Success = 200, Failure = 500, Pending = 102 };

int main()
{
	EnColor Color; // Defining a variable 'colors' of the data-type 'EnColors'
	// 'colors' will have an access to all constant-value members under the user-defined 'EnColors' data type. BUT CAN ONLY STORE one of the defined members.
	EnDirection Direction;
	EnWeek Week;
	EnGender Gender;
	EnMaritalStatus MaritalStatus;
	EnStatus ApiStatus;

	Color = EnColor::Red; // stores 620 of the label ::Red
	Direction = EnDirection::South;
	Week = EnWeek::Thursday;
	Gender = EnGender::Male;
	MaritalStatus = EnMaritalStatus::Single;
	ApiStatus = EnStatus::Success; // stores 200 of the label ::Success

	cout << "'Red' is assigned to the Integer: " << Color << "\n";    // 620    
	cout << "'South' is assigned to the Integer: " << Direction << "\n";  // 29
	cout << "'Thursday' is assigned to the Integer: " << Week << "\n"; // 734
	cout << "'Male' is assigned to the Integer: " << Gender << endl; // 0
	cout << "'Single' is assigned to the Integer: " << MaritalStatus << endl;    // 0 
	cout << "'Success'is assigned to the Integer: " << ApiStatus << endl;    // 200 
}


/* 
 If you want to store each direction at the same time, create one variable per direction:
 as shwon below:
*/

//enum EnDirection { North = 566, South = 100, East = 113, West = 690 };
//
//int main()
//{
//	EnDirection NorthDirection = EnDirection::North;
//	EnDirection SouthDirection = EnDirection::South;
//	EnDirection EastDirection = EnDirection::East;
//	EnDirection WestDirection = EnDirection::West;
//
//	cout << "North = " << NorthDirection << endl;
//	cout << "South = " << SouthDirection << endl;
//	cout << "East  = " << EastDirection << endl;
//	cout << "West  = " << WestDirection << endl;
//
//	return 0;
//}
