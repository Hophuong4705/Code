#ifndef SACH_H
#define SACH_H

#include <iostream>
#include <string>
using namespace std;

class Sach {
private:
    string ten;
    string loai;
    int soluong;
    float donGia;
public:
   	Sach() : soluong(0), donGia(0.0f) {}
		Sach(std::string ten , std::string loai, int soluong, float donGia)
			: ten(ten), loai(loai), soluong(soluong), donGia(donGia) {}
	string getTen() {return ten;}
	string getLoai() {return loai;}
	int getSoLuong(){ return soluong;}
	float getDonGia(){return donGia;}
	void InfoSach(){
			cout << ten << "\t" << loai << "\t" << soluong << "\t" << donGia;			
		} 
};

#endif
