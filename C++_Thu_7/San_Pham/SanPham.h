#ifndef SANPHAM_H
#define SANPHAM_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class SanPham {
private:
    string name;
    int soluong;
    int giaTD, giaTP;
    string hangSX;
    int hanSD;
public:
    
    int getGiaTD() {
        return giaTD;
    }
    
    int getGiaTP() {
        return giaTP;
    }

    int getSoLuong() {
        return soluong;
    }
     
    void Nhap(string g) {
        cout << "Nhap ten san pham :";
        cin.ignore();
        getline(cin, name);
        
        if (g == "tieudung") {
            cout << "Nhap so luong san pham :";
            cin >> soluong;
            cout << "Nhap gia san pham(tieudung) : ";
            cin >> giaTD;
            cout << "Nhap hang san xuat: ";
            cin.ignore();
            getline(cin, hangSX);
        }
        else if (g == "thucpham") {
            cout << "Nhap so luong san pham :";
            cin >> soluong;
            cout << "Nhap gia san pham(thucpham) :";
            cin >> giaTP;
            cout << "Nhap han su dung: ";
            cin >> hanSD;
        }
    }


   
void print(string g, int n) {
   
    cout << setw(20) << left << name;
    cout << setw(10) << left << g;
    cout << setw(10) << left << soluong;
    if (g == "tieudung") {
        cout << setw(10) << left << n;
        cout << setw(20) << left << hangSX;
        cout << setw(15) << left << " "; 
    }
    else if (g == "thucpham") {
        cout << setw(10) << left << n;
        cout << setw(20) << left << " "; 
        cout << setw(15) << left << hanSD << " ngay"; 
    }
    cout << endl;
}


};

#endif

