#include <cassert>
#include <iostream>

//A simple structure
//Structures allow developers to create their own types ("user-defined" types) 
//to aggregate data relevant to their needs.
struct Date {
  public:
   int Day(){ //Mutator
      return day;
   }
   void Day(int d) { 
       if (d>1)
           day = d;
           }
    int month{1};
    int year{0};


  private:
    int day{1};
    
};

//Define a main func to instantiate and test

int main()
{
    Date date;

    //TODO: Initialise date to today's date
    //The belows are member variables
    date.Day(-7);
    

    //TEST
    assert(date.Day() == -7);
    assert(date.month == 1);
    assert(date.year == 0);

    //Print the data in structure
    std::cout << date.Day() << "/" << date.month << "/" << date.year <<"\n";
    

}

//Access Mofifiers , by default members are public
//No restrictions using this modifier
