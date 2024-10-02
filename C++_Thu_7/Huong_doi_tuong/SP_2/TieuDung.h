#ifndef TIEUDUNG_H
#define TIEUDUNG_H
#include <iostream>
#include "SanPham.h"
#include <string.h>
using namespace std;

class TieuDung : public SanPham{
	private:
		string hangSX;
		float tien1;
	public:
		TieuDung(string ten, string loai, int soluong, float dongia,  string hangSX){
			this -> hangSX = hangSX;
		    tien1 = (soluong*dongia*10/100)+ (dongia*sonluong);
		}
		float thanhTien(){
			return tien1;
		}
		printTieuDung(){
			cout<<"\t Hang SX: "<<hangSX<<"\t Tien: "<<tien1<<endl;
		}
};

