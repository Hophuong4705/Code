
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <iostream>

class Student : public Person {
private:
    int mark;
public:
    Student(std::string name, int age, int mark) : Person(name, age) {
        this->mark = mark;
    }

    std::string rank() {
        if (mark >=8)
            return "Gioi";
        else if (mark >= 7)
            return "Kha";
        else if (mark >= 5)
            return "TB";
        else
            return "Yeu";
    }

    void printInfo() {
        Person::printInfo();
        std::cout << mark << " diem => Xep loai: " << rank() << std::endl;
    }
};

#endif
