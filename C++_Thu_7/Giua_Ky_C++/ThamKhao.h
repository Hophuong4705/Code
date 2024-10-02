#include "Sach.h"
using namespace std;
class thamKhao : public Sach{
private: 
    int lop;
public:
    thamKhao(string ten,string loai, int soluong, float dongia,int lop):Sach(ten,loai,soluong,dongia){
        this->lop=lop;
    }
    float thanhTien(){
        return soluong*dongia;
    }
    void info(){
        Sach::info();
        cout<<lop<<"\t";
    }

};