#include <bits/stdc++.h>
#include "Admin.h"
#include "KhachHang.h"
#include "Date.h"
using namespace std;

int main()
{
    int luaChon;
    cout << "---------------Chao Mung Toi Cua Hang Cat Toc Noir---------------\n";
    cout << "Ban muon dang nhap voi tu cach Admin hay la khach hang?" << endl;
    //Kiem tra nguoi su dung la khach hang hay admin
    do
    {
    cout << "(1) Admin \n(2) Khach Hang\n";
    cin >> luaChon;
    system("CLS");
    if (luaChon < 1 || luaChon > 2)
        cout << "Vui long lua chon 1 hoac 2!\n";
    } while (luaChon < 1 || luaChon > 2);

    if (luaChon == 2)         
    {
        //Code Khach Hang
        KhachHang kHang;
    }
    else                       
    {
        //Code Admin
        system("CLS");
        Admin admin;
        admin.dangNhap();
        admin.themNV();
        //admin.menu();
    }

    return 0;
}