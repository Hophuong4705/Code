#ifndef SINH_VIEN_H
#define SINH_VIEN_H
#include <iostream>
#include <string>
using namespace std;

class Sinh_vien {
    protected:
        string name;
        float diem;
    public:
        Sinh_vien(string name, float diem) {
            this->name = name;
            this->diem = diem;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void setDiem(float diem) {
            this->diem = diem;
        }

        float getDiem() {
            return diem;
        }

        void print() {
            cout << "Ten: " << name << " Diem: " << diem << endl;
        }
};
#endif

