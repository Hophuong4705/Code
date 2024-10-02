#ifndef QLSANPHAM_H
#define QLSANPHAM_H
#include <iostream>
#include "SanPham.h"
#include "TieuDung.h"
#include "ThucPham.h"
#include <string.h>
using namespace std;
class QLsanpham{
	int n;
	SanPham sp [50];
	public:
		void Nhap(){
		cout<<"Nhap so luong: "; cin>>n;
		cout <<"Nhap mon hang :";
		cin.ignore();
		getline(cin,ten);
		cout<<"Loai :";
		getline(cin,loai);
		cout <<"Nhap so luong :";
		cin >> soluong;
		cout << "Nhap gia :";
		cin >> dongia ;
		}
};
