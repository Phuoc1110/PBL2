#include <iostream>
#pragma once
using namespace std;

class Date
{
    protected:
        int day;
        int month;
        int year;
    public:
        Date(int = 36, int = 12, int = 1);
        ~Date();
        bool checkNamNhuan(int);
        bool checkNgay();
        bool checkThang();
        void nhapDate();
        friend ostream& operator << (ostream&,const Date&);
};