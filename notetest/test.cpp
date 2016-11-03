#include "test.h"
class Date{
public:
    int year;
    int month;
    int day;
public:
    Date(int _year = 1970, int _month = 1, int _day = 1):year(_year), month(_month), day(_day){}
    Date():year(1971), month(2), day(2){}
    Date(int _year, int _month, int day = 10):year(_year), month(_month), day(_day){}
};
int main(){
    Date d;
    cout << d.year << "-" << d.month << "-" << d.day << endl;
    return 0;
}
//const int cvar = 512;
