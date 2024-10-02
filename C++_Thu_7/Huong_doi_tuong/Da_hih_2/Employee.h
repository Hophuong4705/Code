#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Person.h"
using namespace std;
class Employee : public Person{
	private:
		int hireDay;
		float salary;
	public:
		void NhapNV(){
			Nhap();
			cout<<" Nhap hireDay: ";
			cin>>hireDay;
			cout<<" Nhap Luong: ";
			cin>>salary;
			cout<<endl;
		}
		void sosanh(){
			if(hireDay >= 25){
				cout<<"dc thuong!";
			}
			else{
				cout<<"k nhan dc thuong!";
			}
		}
		virtual void printInfoEmployee(){
			printInfo();
			sosanh();
		}
};
#endif

