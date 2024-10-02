#include <iostream>
#include <fstream>
#include "Employee.h"
#include "Student.h"
#include <iomanip>

using namespace std;

int main() {
    string dulieu1 = "NhanVien";
    string dulieu2 = "SinhVien";
    int n, m;

    cout << "NHAP SO LUONG NHAN VIEN :";
    cin >> n;
    Employee* t = new Employee[n];
    for (int i = 0; i < n; i++) {
        t[i].NhapNV(dulieu1);
        cout << endl;
    }

    cout << "NHAP SO LUONG SINH VIEN : ";
    cin >> m;
    Student* t2 = new Student[m];
    for (int i = 0; i < m; i++) {
        t2[i].NhapSV(dulieu2);
        cout << endl;
    }

    ofstream outputFile("DATA.txt");
    if (outputFile.is_open()) {
        
        outputFile << "Xuat Thong Tin:" << endl;
        for (int i = 0; i < n; i++) {
            t[i].printInfoEmployees(outputFile);
        }
        for (int i = 0; i < m; i++) {
            t2[i].printInfoStudents(outputFile);
        }
        outputFile.close();
        cout << "Du lieu da duoc ghi vao tep DATA.txt" << endl;
    } else {
        cerr << "Khong the mo tep DATA.txt de ghi du lieu." << endl;
    }

    delete[] t;
    delete[] t2;

    return 0;
}
