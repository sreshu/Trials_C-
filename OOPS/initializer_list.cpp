//Initializer lists initialize member variables to specific values, just before the class constructor runs.
//b4 the obj created
//values assigned after obj created

// y is mem of constructor
// year is the mem var

//Initializer lists initialize member variables to specific values, just before the class constructor runs. This initialization ensures
// that class members are automatically initialized when an instance of the class is created.

#include <cassert>
#include <iostream>

//An "invariant" is a rule that limits the values of member variables. 


class Date {
  public:
   Date(int day, int month, int year);
   int Day() { return day;}
  
   void Day(int day);
   
   int Month() { return month; }
   void Month(int month);
    
    int Year() { return year; }
    void Year(int year) {Date::year = year; }
    


  private:
    int day{1};
    int month{1};
    int year{0};
};
Date::Date(int d, int m, int y) : year(y){
    Day(d);
    Month(m);
    
}

void Date::Day(int day){
    if ( day >= 1 && day <= 31) Date::day = day;
}

void Date::Month(int month){
    if ( month >= 1 && month <= 12) Date::month = month;
}


//Define a main func to instantiate and test

int main()
{
    Date date(2, 8, 2001);

    //TODO: Initialise date to today's date
    //The belows are member variables
    //date.Day(-7);
    

    //TEST
    assert(date.Day() == 2);
    assert(date.Month() == 8);
    assert(date.Year() == 2001);

    //Print the data in structure
    std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() <<"\n";
    

}

//Access Mofifiers , by default members are public
//No restrictions using this modifier
