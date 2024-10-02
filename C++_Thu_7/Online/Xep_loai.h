#ifndef XEP_LOAI_H
#define XEP_LOAI_H

#include "Sinh_vien.h"
#include <iostream>
using namespace std;
class Xep_loai : public Sinh_vien {
private:
    float mark;
public:
    Xep_loai(string name, float diem, float mark) : Sinh_vien(name, diem) {
        this->mark = mark;
    }

    string rank() {
        if (mark >= 8)
            return "Gioi";
        else if (mark >= 7)
            return "Kha";
        else if (mark >= 5)
            return "TB";
        else
            return "Yeu";
    }

    
    void printStudent() {
        print();
        cout << "Diem: " << mark << " => Xep loai: " << rank() << endl;
    }
};

#endif
	
