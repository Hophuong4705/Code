#include <iostream>
#include "Employee.h"
#include "Student.h"
using namespace std;
int main(){
	int n, m;
	cout<<"Nhap so luong NV: ";
	cin>>n;
	Employee* t = new Employee[n];
	for(int i=0; i<n; i++){
		t[i].NhapNV();
		cout<<endl;
	}
	cout<<"Nhap so luong SV: ";
	cin>>m;
	Student* t2 = new Student[m];
	for(int i=0; i<m; i++){
		t2[i].NhapSV();
	}
}

