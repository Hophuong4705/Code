#ifndef SANPHAM_H
#define SANPHAM_H
#include <iostream>
#include <string.h>
using namespace std;
class SanPham {
	private:
		string ten;
		string loai;
		int soluong;
		float dongia, tien;
	public:
	    SanPham(string ten, string loai, int soluong, float dongia){
			this -> ten =ten;
			this -> loai = loai;
			this -> soluong = soluong;
			this -> dongia = dongia;
			tien = soluong*dongia;
		}
		void setSL(int soluong){
			this->soluong=soluong;
		}
		string getT(){	return ten;}
		string getL(){	return loai;}
		int getSL(){ return soluong;}
		float getDG(){ return dongia;}
		void printSanPham(){
			cout<<"\t Ten sp: "<<ten<<"\t Loai: "<<loai<<"\t So Luong: "<<soluong<<"\t Dongia: "<<dongia<<"\t Tien: "<<tien<<endl;
		}
};
