#ifndef SANPHAM_H
#define SANPHAM_H
#include <iostream>
#include <string>

using namespace std;

class Sanpham{
	private:
		string ten;
		string loai;
		int soluong;
		float gia;
		float doanhthu;
	public:
		void createSanpham(string ten, string loai, int soluong, float gia){
			this -> ten = ten;
			this -> loai = loai;
			this -> soluong =soluong;
			this -> gia = gia;
			doanhthu = gia*soluong;
		}
		void setSL(int soluong){
			this->soluong=soluong;
			doanhthu = gia*soluong; 
		}
		string getT(){ return ten;}
		string getL(){ return loai;}
		int getSL(){ return soluong;}
		float getG(){ return gia;}
		void printSanpham(){
			cout<<"\t ten: "<<ten<<"\t loai: "<<loai<<"\t so luong: "<<
			soluong<<"\t gia: "<<gia<<"\t doanh thu: "<<doanhthu<<endl;
		} 
};
#endif

