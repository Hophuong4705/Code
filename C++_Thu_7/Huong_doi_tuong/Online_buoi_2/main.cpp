#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"

using namespace std;

int main() {
    vector<Student> students;
    int n;
    cout << "So luong SV: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        Student student;
        student.Nhap_diem();
        students.push_back(student);
    }
    Student::Sap_xep(students);
    ofstream outputFile("DATA.txt");
    if (outputFile.is_open()) {
        outputFile << "Xuat Thong Tin:" << endl;
        Student::printInfoStudents(students, outputFile);
        outputFile.close();
        cout << "Du lieu da duoc ghi vao tep DATA.txt" << endl;
    } else {
        cerr << "Khong the mo tep DATA.txt de ghi du lieu." << endl;
    }

    return 0;
}

