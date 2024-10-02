#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;

class Product{
	private:
		string ten, loai;
		int soluong;
		float dongia, tien;
	public:	
		void createProduct(string ten, string loai, int soluong, float dongia){
			this->ten = ten;			this->loai = loai;				
			this->dongia = dongia;        this->soluong = soluong;
			tien=soluong*dongia;
		}
		void setSL(int soluong){
			this->soluong = soluong;
		}
		string getT(){	return ten;	}
		string getL(){	return loai;	}
		int getSL(){	return soluong;	}
		float getDG(){	return dongia;	}
		void printProduct(){
			cout<<"Name: \t"<<ten<<"Loai: \t"<<loai<<"So luong: \t"<<soluong
			<<"Gia: \t"<<dongia<<"Tien: \t"<<tien<<endl;
	}
};
#endif
