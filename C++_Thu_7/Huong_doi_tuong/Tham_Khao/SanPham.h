#include <iostream>
#include <string>
using namespace std;

class SanPham{
	private :
		string name;
		string loai;
		int soluong;
		float gia;
		string loai1 = "thucpham";
		int tong = 0;
		
		
	public :
		void Nhap();
		void ThongTin();
	    int TongThucPham();
	    void SoSanh();
	    int DoanhThuMax();
	    
};
