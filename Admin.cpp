#include <bits/stdc++.h>
#include "Admin.h"
using namespace std;

Admin::Admin(string sdt, string pass)
    : sdtAdmin(sdt), passAdmin(pass) {}

Admin::~Admin() {}

void Admin::dangNhap()
{
    string tmpPass;
    string tmpSDT;
    do
    {
        cout << "SDT: ";
        cin >> tmpSDT;
        cout << "Password: ";
        cin >> tmpPass;
        if (tmpSDT != this->sdtAdmin && tmpPass != this->passAdmin)
        {
            cout << "Tai khoan hoac mat khau sai!!\nQuy khach vui long dien lai!!\n";
        }
    } while(tmpSDT != this->sdtAdmin && tmpPass != this->passAdmin);
    cout << "-------------------------DANG NHAP THANH CONG-------------------------\n";
}

void Admin::themNV()
{
    fstream fileNV;
    NhanVien tmp;

    fileNV.open("NhanVien.txt", ios::out);
    cout << "Vui long nhap thong tin nhan vien moi.\n";
    cout << "Ho ten: ";
    cin >> tmp.hoTen;
    cout << "Ma nhan vien: ";
    cin >> tmp.maNV;
    cout << "SDT nhan vien: ";
    cin >> tmp.sdtNV;
    cout << "Ngay thang nam sinh: ";
    tmp.bDate.nhapDate();
    cout << "Gioi tinh (0: Nu, 1: Nam): ";
    cin >> tmp.gt;
    cout << "Luong thang: ";
    cin >> tmp.luong;

    fileNV << tmp.hoTen << ", ";
    fileNV << tmp.maNV << ", ";
    fileNV << tmp.sdtNV << ", ";
    fileNV << tmp.bDate << ", ";
    fileNV << tmp.gt << ", ";
    fileNV << tmp.luong << ", ";
    fileNV.close();
}

void NhanVien::show()
{
    cout << "Ho ten: " << this->hoTen << endl;
    cout << "Ma NV: " << this->maNV << endl;
    cout << "SDT: " << this->sdtNV << endl;
    cout << "Ngay sinh: " << this->bDate << endl;
    cout << "Gioi tinh: " << this->gt << endl;
    cout << "Luong: " << this->luong << endl;
}