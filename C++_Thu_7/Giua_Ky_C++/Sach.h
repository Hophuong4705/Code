#ifndef SACH_H
#define SACH_H
#include <iostream>
#include <string>
using namespace std;
class Sach {
protected:
    string ten,loai;
    int soluong;
    float dongia;

public:
    
    Sach(string t,string l, int sl, float dg){
        ten=t;
        loai=loai;
        soluong=sl;
        dongia=dg;
    }

    // Getter for 'ten'
    std::string getTen() {
        return ten;
    }

    // Getter for 'soluong'
    int getSoluong()  {
        return soluong;
    }

    // Getter for 'dongia'
    float getDongia() {
        return dongia;
    }
    string getloai(){return loai;}

    // Method to display book information
    void info()  {
        cout<<ten<<"\t"<<loai<<"\t"<<soluong<<"\t"<<dongia<<"\t";
    }
};

#endif