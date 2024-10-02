#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
class Employee : public Person {
private:
   int hireDay;
   float salary;
public:
    void NhapNV(string g) {
      Nhap(g);
      cout << "Nhap hireDay :";
      cin >> hireDay;
}



void SoSanh(ofstream &outputFile) {
    if (hireDay >= 25) {
        outputFile << "Duoc nhan thuong !" << endl;
    } else {
        outputFile << "Chua duoc nhan thuong !" << endl;
    }
}

void printInfoEmployees(ofstream &outputFile) {
    printInfo(outputFile);
    SoSanh(outputFile);
}






};

#endif

