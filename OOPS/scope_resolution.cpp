#include <cassert>
#include <iostream>

//An "invariant" is a rule that limits the values of member variables. 


class Date {
  public:
   Date(int d, int m, int y);
   int Day() { return day;}
  
   void Day(int d) { 
       if (d>=1 && d <= 31)
           day = d;
           }
    int Month() { return month; }
    void Month(int m){
        if (m >= 1 && m <= 12) month = m;
    }
    int Year() { return year; }
    void Year(int y) { year = y; }
    


  private:
    int day{1};
    int month{1};
    int year{0};


   
    
};
Date::Date(int d, int m, int y){
    Day(d);
    Month(m);
    Year(y);
}

//Define a main func to instantiate and test

int main()
{
    Date date(29, 8, 2001);

    //TODO: Initialise date to today's date
    //The belows are member variables
    //date.Day(-7);
    

    //TEST
    assert(date.Day() == 29);
    assert(date.Month() == 8);
    assert(date.Year() == 2001);

    //Print the data in structure
    std::cout << date.Day() << "/" << date.Month() << "/" << date.Year() <<"\n";
    

}

//Access Mofifiers , by default members are public
//No restrictions using this modifier
