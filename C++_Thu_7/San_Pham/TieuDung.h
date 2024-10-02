#ifndef TIEUDUNG_H
#define TIEUDUNG_H

#include "SanPham.h"

class TieuDung : public SanPham {
private:
    string hangSX;
public:

    int thanhTien() {
        int tien = getGiaTD();
        int num = getSoLuong();
        return tien * num + (tien * num * 10) / 100;
    }
     
    void NhapTD(string v){
        Nhap(v);
        
    }

    void xuatTDDL(string v) {
        int sum = thanhTien();
        print(v,sum);
    }

};

#endif

