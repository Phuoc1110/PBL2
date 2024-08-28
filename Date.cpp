#include "Date.h"
using namespace std;

Date::Date(int d, int m, int y)
    : day(d), month(m), year(y) {}

Date::~Date() {}

bool Date::checkNamNhuan(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return true;
    return false;
}

bool Date::checkNgay()
{
    if (this->month == 2 && checkNamNhuan(this->year) && this->day > 0 && this->day < 30)
        return true;
    else if (this->month == 2 && !checkNamNhuan(this->year) && this->day > 0 && this->day < 29)
        return true;
    else if ((this->month < 8 && this->month % 2 == 1) || (this->month > 7 && this->month % 2 == 0))
    {
        if (this->day < 32 && this->month > 0)
            return true;
    }
    else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11 && this->day < 31 && this->day > 0)
        return true;
    return false;
}

bool Date::checkThang()
{
    if (this->month > 0 && this->month < 13)
    {
        return true;
    }
    return false;
}

void Date::nhapDate()
{
    do
    {
        cout << "DD MM YYYY: ";
        cin >> this->day >> this->month >> this->year;
        if (!this->checkNgay() || !this->checkThang())
            cout << endl << "Ngay thang nam sinh khong hop le!!" << endl;
    } while (!this->checkNgay() || !this->checkThang());
    
}

ostream &operator<<(ostream& o, const Date& date)
{
    o << date.day << "/" << date.month << "/" << date.year;
    return o;
}
