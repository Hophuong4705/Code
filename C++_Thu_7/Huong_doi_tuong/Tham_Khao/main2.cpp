#include <iostream>
#include "SanPham.h"
using namespace std;

int main()
{
	int n ;
	int sumtp=0; 
	cout<< "NHAP SO LUONG SAN PHAM :";
	cin>>n ; 
	SanPham t1;
    SanPham* t = new SanPham[n];
for(int i=0;i<n;i++){
    t[i].Nhap();
    t[i].ThongTin();
    cout << endl ;
 }
 //
 for(int i=0;i<n;i++){
 	sumtp += t[i].TongThucPham(); 
 }
  cout << "Tong san pham loai (thucpham) la :"<<sumtp<<"    ";
  
// 
int lonnhat = t[0].DoanhThuMax();
    for (int i = 1; i < n; i++) {
        int dtMax = t[i].DoanhThuMax();
        if (dtMax > lonnhat) {
            lonnhat = dtMax;
        }
    }
    cout << "Doanh thu cao nhat la :" << lonnhat << endl;

delete [] t; 
}
