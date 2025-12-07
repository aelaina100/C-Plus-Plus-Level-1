
#include <iostream>
using namesapce std,

#include <iostream>
#include <string>
using namespace std;

// 1- Form the question as in the previous two examples
// 2- Initialization is via user input.
// 
// 
// 
// ------------------------------------------
// Structure #1: Nested inside stBook
// ------------------------------------------
struct stPublisher
{
    string name;
    string country;
};

// ------------------------------------------
// Structure #2: Contains stPublisher
// (Book HAS a publisher → good nesting)
// ------------------------------------------
struct stBook
{
    string title;
    string author;
    int year;
    stPublisher publisher;  // <-- nested structure
};

// ------------------------------------------
// Structure #3: Totally Independent
// (Has NO relationship to Book or Publisher)
// ------------------------------------------
struct stWeather
{
    float temperature;
    float humidity;
    string conditions;
};

int main()
{
    stBook book;
    stWeather weather;

    // Book information
    book.title = "Clean Code";
    book.author = "Robert C. Martin";
    book.year = 2008;
    book.publisher.name = "Prentice Hall";
    book.publisher.country = "USA";

    // Weather information (COMPLETELY SEPARATE)
    weather.temperature = 22.5f;
    weather.humidity = 60.0f;
    weather.conditions = "Sunny";

    cout << "Book Title: " << book.title << endl;
    cout << "Publisher: " << book.publisher.name << endl;

    cout << "\nWeather Today: " << weather.conditions << ", "
        << weather.temperature << " degrees" << endl;

    return 0;
}



