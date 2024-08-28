#include <iostream>
#include "Date.h"
using namespace std;

class Admin
{
    private:
        string sdtAdmin;
        string passAdmin;
    public:
        Admin(string = "0335435578", string = "Password123");
        ~Admin();
        void dangNhap();
        void themNV();
        // void huyNV();
        //void menu();
};

struct NhanVien
{
    public:
        string maNV;
        string hoTen;
        string sdtNV;
        Date bDate;                 //ngay thang nam sinh
        bool gt;                    //true : nam, false: nu
        string luong;
    public:
        void show();
};