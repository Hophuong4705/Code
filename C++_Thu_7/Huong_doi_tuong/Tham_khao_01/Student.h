#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
	private :
		string major;
		float mark;
	public :
		void NhapSV(string g){
			Nhap(g);
			cout <<"Nhap nganh hoc :";
			cin.ignore() ;
			getline(cin,major);
			cout << "Nhap diem : ";
			cin >> mark ; 
		}
		
void Thuong(ofstream &outputFile) {
    if (mark > 8 && mark <= 10) {
        outputFile << "Duoc thuong !" << endl;
    } else if (mark < 8) {
        outputFile << "Rot mon !" << endl;
    }
}
	void printInfoStudents(ofstream &outputFile) {
    printInfo(outputFile);
    Thuong(outputFile);
}
		 
		
		
};
#endif

