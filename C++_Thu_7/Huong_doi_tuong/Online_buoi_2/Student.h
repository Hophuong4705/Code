#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

class Student : public Person {
    private:
        float mark;
    public:
        void Nhap_diem() {
            Person::Nhap();
            cout << "Mark: ";
            cin >> mark;
        }

        float getMark() const {
            return mark;
        }

        static bool compare(const Student& a, const Student& b) {
            return a.mark > b.mark;
        }

        static void Sap_xep(vector<Student>& students) {
            sort(students.begin(), students.end(), Student::compare);
        }

        void printInfo(ofstream &outputFile) const {
            Person::printInfo(outputFile);
            outputFile << "\tMark: " << mark << endl;
        }
        static void Tim_kiem(vector<Student>& students){
        	
		}

        static void printInfoStudents(const vector<Student>& students, ofstream &outputFile) {
            for (int i=0; i<students.size();i++) {
                students[i].printInfo(outputFile);
            }
        } 
};

#endif

