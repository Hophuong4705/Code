#include <iostream>
#include "HinhTron.h"
#include "HinhVuong.h"
#include "HinhChuNhat.h"

using namespace std;

int main() {
    string name, color;
    double ban_kinh;
    int Canh, Chieu_dai, Chieu_rong;

    
    cout << "Nhap thong tin hinh tron:\n";
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap mau sac: ";
    getline(cin, color);
    cout << "Nhap ban kinh: ";
    cin >> ban_kinh;
    cin.ignore(); 

    HinhTron n(name, color, ban_kinh);
    n.print_HT();

    
    cout << "\nNhap thong tin hinh vuong:\n";
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap mau sac: ";
    getline(cin, color);
    cout << "Nhap do dai canh: ";
    cin >> Canh;
    cin.ignore(); 

    HinhVuong m(name, color, Canh);
    m.print_HV();

   
    cout << "\nNhap thong tin hinh chu nhat:\n";
    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap mau sac: ";
    getline(cin, color);
    cout << "Nhap chieu dai: ";
    cin >> Chieu_dai;
    cout << "Nhap chieu rong: ";
    cin >> Chieu_rong;

    HinhChuNhat v(name, color, Chieu_dai, Chieu_rong);
    v.print_HCN();

    return 0;
}

