#include <iostream>
#include "Date.h"
using namespace std;

class KhachHang
{
    private:
        string hoTen;
        Date bDate;                 //ngay thang nam sinh
        string sdtKH;
        string passKH;
        bool gt;                    //true : nam, false: nu

    public:
        KhachHang();
        ~KhachHang();
        void taoTK();
        // void datLich(const KhachHang&);
        void dangNhap();
};