#include "Sach.h"
using namespace std;
class GiaoKhoa : public Sach{
private:
    string mon;
public:
    GiaoKhoa(string ten,string loai,int soluong,float dongia,string mon):Sach(ten,loai,soluong,dongia){
        this->mon=mon;
    }
    float thanhTien(){
        return soluong*dongia*10/100;
    }
    void info(){
        Sach::info();
        cout<<mon<<"\t";
    }
};