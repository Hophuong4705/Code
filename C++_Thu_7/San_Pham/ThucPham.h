#ifndef THUCPHAM_H
#define THUCPHAM_H

#include "SanPham.h"

class ThucPham : public SanPham {
private:
    int hanSD;
public:

    int thanhTien() {
        int tien = getGiaTP();
        int num = getSoLuong();
        return tien * num + (tien * num * 10) / 100;
    }
     
    void HetHan(int hanSD){
         if (hanSD<=10){
         	cout << name << "da gan het han !";
		 }
	 }
    void NhapTP(string n){
        Nhap(n);
    }
     
     void HetHan(){
     	for (int i=)
	 }
    void xuatTPPL(string n) {
        int sum = thanhTien();
        print(n,sum);
    }

};

#endif

