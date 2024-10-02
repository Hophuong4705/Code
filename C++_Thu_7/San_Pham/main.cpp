#include <iostream>
#include "TieuDung.h"
#include "ThucPham.h"
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    string dulieu1 = "tieudung";
    string dulieu2 = "thucpham";
    cout << "NHAP SO LUONG SAN PHAM (TIEUDUNG) :";
    cin >> n;
    TieuDung* t = new TieuDung[n];
    for (int i = 0; i < n; i++) {
        t[i].NhapTD(dulieu1);
        cout << endl;
    }
    

    cout << "NHAP SO LUONG SAN PHAM (THUCPHAM) : ";
    cin >> m;
    ThucPham* t2 = new ThucPham[m];
    for (int i = 0; i < m; i++) {
        t2[i].NhapTP(dulieu2);
        cout << endl;
    }
     
    cout << setw(20) << left << "San pham";
    cout << setw(10) << left << "Loai";
    cout << setw(10) << left << "So luong";
    cout << setw(10) << left << "Gia";
    cout << setw(20) << left << "Hang san xuat";
    cout << setw(15) << left << "Han su dung" << endl;

    cout << setfill('-') << setw(85) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < n; i++) {
        t[i].xuatTDDL(dulieu1);
    }

    for (int i = 0; i < m; i++) {
        t2[i].xuatTPPL(dulieu2);
    }

    delete[] t; 
    delete[] t2; 

    return 0;
}

