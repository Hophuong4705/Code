#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
   
   void Nhap(string g){
   	   if (g == "NhanVien"){
   	   	cout << "Ten cua nhan vien :";
        cin.ignore();
        getline(cin,name);
        cout << "Nhap tuoi :";
        cin >> age;
		}
		else if(g == "SinhVien"){
			cout << "Ten cua sinh vien :";
			cin.ignore();
			getline(cin,name);
			cout <<"Nhap tuoi :";
			cin >> age ;
		}
   }

    void printInfo(ofstream &outputFile) {
    outputFile << "Ho Va Ten: " << name << endl;
    outputFile << "Tuoi: " << age << endl;
}

};

#endif


