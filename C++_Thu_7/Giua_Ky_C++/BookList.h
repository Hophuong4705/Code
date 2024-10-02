#include "ThamKhao.h"
#include "GiaoKhoa.h"
#include <vector>
#include <fstream>
using namespace std;
class BookList{
private:
    vector<thamKhao> thams;
    vector<GiaoKhoa> giaos;
public:
    void Nhap(){
        string ten, loai,mon,st;
        int sl,lop;
        float dongia; 
        ifstream file("data.txt");
        if(!file.is_open()) cout<<"fail";
        else cout<<"done";
        while(file>>ten>>loai>>sl>>dongia>>st){
            if (loai=="G") giaos.push_back(GiaoKhoa(ten,loai,sl,dongia,st));
            else if(loai=="T") thams.push_back(thamKhao(ten,loai,sl,dongia,stoi(st)));
            // stoi hàm chuyển đổi giá trị về số nguyên
        }
        file.close();
    }
    void xuat(){
        for (thamKhao t:thams){// biến tạm thời 
            t.info(); cout<<(int)t.thanhTien()<<"\n";
        }
        for( GiaoKhoa g:giaos){
            g.info(); cout<<(int)g.thanhTien()<<"\n";
        }
    }
    void Tim(string name){
        for (thamKhao t:thams){
            if (t.getTen()==name){
                t.info();
                return;
            }
        }
        for( GiaoKhoa g:giaos){
            if(g.getTen()==name){
                g.info();
                return;
            }
        }
    }
    void Doanhthu(){
        float dt=0;
        for (thamKhao t:thams){
            dt +=t.thanhTien();
        }
        cout<<"doanh thu cua sach tham khao: "<<(int)dt;
        dt=0;
        for( GiaoKhoa g:giaos){
            dt+= g.thanhTien();
        }
        cout<<"doanh thu cua sach giao khao: "<<(int)dt;
    }
    void SapXep(){
        for (int i=0;i<thams.size()-1;i++){
            for (int j=i+1;i<thams.size();j++){
                if( thams[i].thanhTien()<thams[j].thanhTien()) swap(thams[i],thams[j]);
            }
        }
        for (int i=0;i<giaos.size()-1;i++){
            for (int j=i+1;i<giaos.size();j++){
                if( giaos[i].thanhTien()<giaos[j].thanhTien()) swap(giaos[i],giaos[j]);
            }
        }
    }
    void in(){
        ofstream file("giaokhoa.txt");
        for( GiaoKhoa g:giaos){
            file<<g.getTen()<<"\t"<<g.getloai()<<"\t"<<g.getSoluong()<<"\t"<<g.getDongia()<<"\n";
        }
        file.close();
    }

};
