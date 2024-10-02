#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {
    private:
        string id;
        string name;
        int age;
    public:
        void Nhap() {
            cout << "ID: ";
            cin.ignore();
            getline(cin, id);
            cout << "Name: ";
            getline(cin, name);
            cout << "Age: ";
            cin >> age;
            cout << endl;
        }

        void printInfo(ofstream &outputFile) const {
            outputFile << "\tID: " << id << "\tName: " << name << "\tAge: " << age << endl;
        }
};

#endif

