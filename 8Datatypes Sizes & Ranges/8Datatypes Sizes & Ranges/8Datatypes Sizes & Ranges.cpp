

#include <iostream>
/* Data Types & Ranges:
   There is no room for memorization here — just aim for understanding.

   Tip: Having something like this:
        int age = 150;

   is an abomination! Why?
   It’s equivalent to sipping an espresso from a cauldron — an enormous cooking pot.
   This is blasphemy! It means reserving far too much memory only to later store a tiny number like 150.
   Such misuse makes your application inefficient and slow.
   So, is there a suitable data types to supercede the integer one ?. Yes, there is. Continue on with this lesson.
*/

  

/* Let us have a look at the Data Types ranges & sizes:

|   Type   |      Meaning            |             Range                    |    Size(Bytes)   |
| -------- | ------------------------| -------------------------------------| ---------------- |
| int      | Integer                 | -2,147, 483, 648   + 2,147, 483, 647 | 4                |
| float    | Floating - Point        | 1.17549e-38        3.40282e+38     | 4                | 
| double   | Double Floating - Point | 2.22507e-308       1.79769e+308    | 8                | double that of float,range & size wise.
| char     | Character               | -127               127             | 1                |
| wchar_t  | Wide Character          |                                      | 2                |
| bool     | Boolean                 | 0                  1               | 1                |
| void     | Empty                   |                                      | 0                |
| string   | String                  |                                      | 12               |
 
 ** The Size(Bytes) differs in accordance with the OS whether it is 32-bit or 64-bit OS for windows or Linux or any..(applies to all tables 
 *   in this file).
*/

  

/*
*  Understand: Type Modifiers (Modifying the types). 
   There are 4 of them:

   1- Signed.
   2- Unsigned.
   3- Short.
   3- Long

   These 4 modifiers can only modify the data types of: int, double, & char ONLY.
* 
* 

| Type            | Sign     | Range                                       | Size    |
| -------------------------- | --------------------------------------------|---------| 
| int             | signed   | -2,147,483,648   +2,147,483,647             | 4 bytes | * signed is the default (int a = signed int a). Also: the + or - sign is stored alone at the last bit of the 4 bytes
|                 | unsigned | 0              4,294,967,295              | 4 bytes | * no possibility to store negative numbers: Starts from 0 and therefore doubles the max limit. The last bit of the 4 bytes will be used for storing numbers instead of storing the + or - sign 
                                                                                           so, if you want to double the range while keeping the size as it is then type: UNSIGNED int (same concept applies to double & char).

| short int       | signed   | -32,768          +32,767                    | 2 bytes | * observe what happens when, instead, adding 'short' to int: assigned memory is cut in half and the range significantly drops.
| short           | unsigned |  0             65,536                     | 2 bytes | * typing 'short int' is the same as typing 'short'

| long int        | signed   | -2,147,483,648   +2,147,483,647             | 4 bytes | * So after adding 'long' to int, why do the Range & size stay the same ?? (As in long int = int) ?. it is a long story that has to do with the history of the OS evolutions.
| long            | unsigned | 0              4,294,967,295              | 4 bytes | * typing 'long int' is the same as typing 'long'

| long long int   | signed   | -(2^63)        (2^63)-1                   | 8 bytes | * adding long long, doubles the size & significantly increases the range
| long long       | unsigned | 0              18,446,744,073,709,551,615 | 8 bytes | * the unsigned rule is in affect here.


  
* Defining long long int age is blasphemy of the highest order in the programming realm. This deems the program very slow.
* Final conclusion: One should be extra careful when assigning data types to variables.
*/



/* Now, regarding numbers with decimals.

| Type        | Sign   | Range                           | Size    |
| ------------| ------ | ------------------------------- | --------|
| float       | signed | -1.17549e-38   +3.40282e+38    | 4 bytes |
| double      | signed | -2.22507e-308  +1.79769e+308   | 8 bytes |
| long double | signed | -10e-307      +10e+308        | 12 bytes|

*/


/*

| Type   | Sign     | Range        | Size     |
| ------ | -------- | ------------ | -------- |
| char   | signed   | -127   127 | 1 byte   |
|        | unsigned | 0      255 | 1 byte   |

| bool   |          |              | 1 byte   |  * Empty Range as it depends on the operating system.
| String |          |              | 12 bytes |  * Empty Range as it depends on the operating system. 
| Void   |          | Empty        | 0 bytes  |

*/

// Now, let's take practical examples that put this information into perspective:

int main()
{
    // Note: By default, everythig is signed

    int v1;
    signed int v2;      // same exact thing as typing    int v2

    unsigned int v3;   // 1- changes the range from 0 to double that of the maximum. 2- The size of the reserved memory should stay the same.
                      //  for #1, to double that of the maximum becasue the + sign stored at the last bit of the last byte is now used to store numbers.

    short int v4;   // much smaller ranges than that of int, plus half the size. -32,768          +32,767    2 Bytes
    short v5;      // = short int v5   The exact same thing.

    unsigned short int v6; // range spans from 0 to double the maximum range of the short int type (65,536). Size remains the same.
    unsigned short v7;  // = unsigned short v7 // that is what to use for age !!

    signed long int v8; // the exact same thing as  signed int v8. Why this is, is a long story.
    long int v9; // exactly the same thing as int v9 & signed is included by default before long in here.
    long v10; // =  long int v9

    unsigned long v11; // = unsigned long int = unsigned int. Range is from 0 to double the maximum range of integer. The size remains the same as that of int
    
    long long int v12; // range is much bigger than that of int & size is double that of int.
    unsigned long long int v13; // range is from 0 to double the maximum range of long long int where the sizing remains the same 
                                // as that of long long int (= signed long long int) becasue we're compensating the removal of the 
                               // negative ranges with the doubling of the maximum range.

    long double v14; 
    signed char v15;
    char v16;
    unsigned char v17;

    // Bottom line: Use the appropriate data types along with the modifiers: Signed, Unsigned, Short, & Long (that are 
    //              only applicable to int, double, & char) according to what is needed.
    //              an espresso needs an espresso cup or a cup that is slightly bigger but never a cauldron as drinking will be too slow.