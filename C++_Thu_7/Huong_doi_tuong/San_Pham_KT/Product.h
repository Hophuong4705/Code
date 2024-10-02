#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;

class Product{
	private:
		string ma, ten;
		int soluong;
		float dongia, tien;
	public:	
		void createProduct(string ma, string ten, int soluong, float dongia){
			this->ma = ma;				this->ten = ten;
			this->soluong = soluong;	this->dongia = dongia;
			tien=soluong*dongia;
		}
		void setSL(int soluong){
			this->soluong=soluong;
		}
		string getM(){	return ma;	}
		string getT(){	return ten;	}
		int getSL(){	return soluong;	}
		float getDG(){	return dongia;	}
		void printProduct(){
			cout<<ma<<"\t"<<ten<<"\t"<<soluong<<"\t"<<dongia<<"\t"<<tien<<endl;
	}
};
#endif

