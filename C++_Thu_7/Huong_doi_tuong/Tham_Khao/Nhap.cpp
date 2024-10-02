#include "SanPham.h"
#include <iostream>
#include <string> 
using namespace std;


void SanPham::Nhap(){
	
		cout <<"Nhap mon hang :";
		cin.ignore();
		getline(cin,name);
		cout<<"Loai :";
		getline(cin,loai);
		cout <<"Nhap so luong :";
		cin >> soluong ;
		cout << "Nhap gia :";
		cin >> gia ;
    }

void SanPham :: ThongTin(){
	int sum = 0 ; 
	sum =gia*soluong;
	cout << "Ten san pham :"<< name <<" ,";
	cout << "So luong :"<< soluong<<" ,";
	cout <<"Tong tien :"<< sum << "VND" <<endl;
	}
	


int SanPham::TongThucPham(){
	if (loai==loai1){
		return gia*soluong;
	}
}

int SanPham::DoanhThuMax(){
	return gia*soluong;
}

