#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <iostream>

class Employee : public Person {
private:
    int numDay;
public:
    Employee(std::string name, int age, int numDay) : Person(name, age) {
        this->numDay = numDay;
    }

    std::string rank() {
        if (numDay > 22)
            return "Xuat sac";
        else if (numDay >= 18 && numDay <= 22)
            return "Tot";
        else if (numDay >= 5)
            return "Yeu";
        else
            return "Duoi viec!";
    }

    long Salary() {
        return numDay * 500;
    }

    void printInfo() {
        Person::printInfo();
        std::cout << numDay << " ngay => Xep loai: " << rank() << std::endl;
        std::cout << "Luong: " << Salary() << std::endl;
    }
};

#endif
