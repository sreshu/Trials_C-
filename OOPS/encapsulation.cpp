#include <cassert>


class Date {

public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);
  //Date Tomorrow();


private:
   int day_{1};
   int month_{1};
   int year_{0};

};

Date Tomorrow(Date date) {
    return tomorrow;
}

Date::Date(int day, int month, int year){
    Year(year);
    Month(month);
    Day(day);
    
}

void Date::Day(int day){
    if (day >= 1 && day <= DaysInMonth())
       day_=day;
}

void Date::Month(int month){
    if (month >= 1 && month <= 12)
       month_=month;
}

void Date::Year(int year){ year = year; }

//Test

//Accessor func. or getter func.