#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include "Person.h"
using namespace std;

void Student::Nhap() {
    cout << "Fill name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Fill major: ";
    getline(cin, major);
    cout << "Fill id: ";
    cin >> id;
    cout << "Mark: ";
    cin >> mark;
}

void Student::Add(ofstream &outputFile) {
    cout << "Nhap thong tin cho sinh vien moi:" << endl;
    Nhap();
    outputFile << "New Student Added:" << endl;
    prints(outputFile);
    outputFile << endl;
}

void Student::Seeking(ofstream &outputFile, string s) {
	bool check = false ;
    if (s == name) {
         check = true ;
    } 
    
    if(check == true){
    	cout << "Da Tim Thay !";
    	prints(outputFile);
	}
	else {
		cout << " ";
	}
}

void Student::Delete(ofstream &outputFile, long long x) {
    
    bool check = false;
    if (x==id){
    	check = true ;
	}
if (check == true)
{ 
    cout << " ";
}
else {
	prints(outputFile);
}
}

void Student::prints(ofstream &outputFile) {
    outputFile << "Name: " << name << endl;
    outputFile << "Major: " << major << endl;
    outputFile << "ID: " << id << endl;
    outputFile << "Mark: " << mark << endl << endl;
}


