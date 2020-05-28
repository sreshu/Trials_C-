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


class Birthday {
  public:
   Birthday(int d, int m, int y);
   int Day() { return day;}
  

   
   int Month() { return month; }

    
    int Year() { return year; }
   
    


  private:
    int const day;
    int const month;
    int const year;
};
Birthday::Birthday(int d, int m, int y) : day(d), month(m), year(y){}



//Define a main func to instantiate and test

int main()
{
    Birthday date(2, 8, 2001);

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

