#ifndef THUCPHAM_H
#define THUCPHAM_H
#include <iostream>
#include "SanPham.h"
#include <string.h>
using namespace std;

class ThucPham : public SanPham{
	private:
		int hanSX;
		float tien2;
	public:
		ThucPham(string ten, string loai, int soluong, float dongia,  string hanSX){
			this -> hanSX = hanSX;
		    tien2 = (soluong*dongia*10/100)+ (dongia*sonluong);
		}
		float thanhtien1(){
			return tien2;
		}
		printThPham(){
			cout<<"\t Han SX: "<<hanSX<<"\t tien: "<<tien2<<endl;
		}
};
