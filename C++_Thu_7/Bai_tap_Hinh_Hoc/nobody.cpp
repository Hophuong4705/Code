#include <iostream>
#include "HinhTron.h"
#include "HinhVuong.h"
#include "HinhChuNhat.h"

int main(){
	HinhTron n("hinh tron", "vang", 4.0);
	n.print_HT();
	HinhVuong m("hinh vuong","da", 4);
	m.print_HV();
	HinhChuNhat v("hinh chu nhat", "hong", 4, 4);
	v.print_HCN();
	std::cout<<endl;
	return 0;
}
