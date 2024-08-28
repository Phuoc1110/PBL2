#include <bits/stdc++.h>
#include "KhachHang.h"

KhachHang::KhachHang() {}
KhachHang::~KhachHang() {}

void KhachHang::taoTK()
{
    cout << "Ho Ten: ";
    getline(cin, this->hoTen);
    this->bDate.nhapDate();
    cout << "SDT : ";
    cin >> this->sdtKH;
    cout << "Gioi tinh (0: Nu, 1: Nam): ";
    cin >> this->gt;
    cout << "Password: ";
    cin >> this->passKH;
}

void KhachHang::dangNhap()
{
    string tmpPass;
    string tmpSDT;
    do
    {
        cout << "SDT: ";
        cin >> tmpSDT;
        cout << "Password: ";
        cin >> tmpPass;
        if (tmpSDT != this->sdtKH && tmpPass != this->passKH)
        {
            cout << "Tai khoan hoac mat khau sai!!\nQuy khach vui long dien lai!!\n";
        }
    } while(tmpSDT != this->sdtKH && tmpPass != this->passKH);
    cout << "-------------------------DANG NHAP THANH CONG-------------------------";

}

