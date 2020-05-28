#include <cassert>
#include <iostream>

//A simple structure
//Structures allow developers to create their own types ("user-defined" types) 
//to aggregate data relevant to their needs.
struct Date {
    int day;
    int month;
    int year;
};

//Define a main func to instantiate and test

int main()
{
    Date date;

    //TODO: Initialise date to today's date
    //The belows are member variables
    date.day = 9;
    date.month = 3;
    date.year = 2020;

    //TEST
    assert(date.day == 9);
    assert(date.month == 3);
    assert(date.year == 2020);

    //Print the data in structure
    std::cout << date.day << "/" << date.month << "/" << date.year <<"\n";
    

}

//Access Mofifiers , by default members are public
//No restrictions using this modifier
