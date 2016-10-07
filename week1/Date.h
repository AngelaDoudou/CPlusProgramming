#ifndef _DATE_CLASS_
#define _DATE_CLASS_
#include <iostream>
using std::cout;
using std::endl;
class Date;
bool operator==(const Date& d1, const Date& d2);
bool operator<(const Date& d1, const Date& d2);
bool operator>(const Date& d1, const Date& d2);
bool CreatePoints(const Date *darr, const int size);

class Date
{
    public:
        Date(const int y=0, const int m=1, const int d=1):year(y),month(m),day(d){}
        inline void print() const {
            cout << year << "-" << month << "-" << day << endl;
        }

        inline Date& operator=(const Date& d){
            year = d.year;
            month = d.month;
            day = d.day;
            return *this;
        }
        friend bool operator==(const Date& d1, const Date& d2);
        friend bool operator<(const Date& d1, const Date& d2);
        friend bool operator>(const Date& d1, const Date& d2);
        friend bool CreatePoints(Date* darr, const int size);

    private:
        int year;
        int month;
        int day;
};
inline bool operator==(const Date& d1, const Date& d2){
    return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}
inline bool operator<(const Date& d1, const Date& d2){
    if(d1.year != d2.year){
        return d1.year < d2.year;
    }
    if(d1.month != d2.month){
        return d1.month < d2.month;
    }
    if(d1.day != d2.day){
        return d1.day < d2.day;
    }
    return false;//d1 == d2
}
inline bool operator>(const Date& d1, const Date& d2){
    if(d1.year != d2.year){
        return d1.year > d2.year;
    }
    if(d1.month != d2.month){
        return d1.month > d2.month;
    }
    if(d1.day != d2.day){
        return d1.day > d2.day;
    }
    return false;//d1 == d2
}

#endif//_DATE_CLASS_
