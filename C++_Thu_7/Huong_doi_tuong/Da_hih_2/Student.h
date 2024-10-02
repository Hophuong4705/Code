#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
#include <string>
using namespace std;
class Student : public Person{
	private:
		string major;
		float mark;
	public:
		void NhapSV(){
			Nhap();
			cout<<"Nganh: ";
			cin.ignore();
			getline(cin, major);
			cout<<"Diem: ";
			cin>>mark;
		}
		void Thuong(){
			if(mark > 8 && mark <10){
				cout<<"dc thuong!";
			}
			else{
				cout<<"rot!";
			}
		}
		void printStudent(){
			printInfo();
			Thuong();
		}
};
#endif
