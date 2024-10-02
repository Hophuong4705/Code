#ifndef DANHSP_H
#define DANHSP_H
#include <fstream>
#include "Sanpham.h"
using namespace std;

class Danhsp{
	private:
		int n;
		Sanpham sp[50];
	public:
		void FileSanpham(){
			fstream f;	f.open("data.txt", ios::in);
			n=0;
			string ten, loai; int soluong; float gia;
			while (!f.eof()) {
				f>>ten>>loai>>soluong>>gia; 
				sp[n++].createSanpham(ten, loai, soluong, gia);
			}
			f.close();
			cout<<"Load data form file - Done...!"<<endl;
        }
        void printSanpham(){
        	for(int i=0; i<n; i++){
        		cout<<i+1<<" ";  sp[i].Sanpham();
			}
			cout<<" co "<<n<<"san pham !"<<endl;
		}
		void updateSanpham(){
			int k;
			cout<<"Nhap so luong san pham dau tien: "; cin>>k;
			sp[0].setSL(k);
			cout<<"Update p[0] - Done";
		}
		void sortSanpham() {
            int i, j;
            Sanpham key;
            for (i = 1; i < n; i++) {
                  key = sp[i];
                  j = i - 1;
        while (j >= 0 && sp[j].getgia() > key.getgia()) {
            sp[j + 1] = p[j];
            j = j - 1;
        }
        sp[j + 1] = key;
        }
       }
       void saveSanphamFile(){
	  		ofstream f; 	f.open("data1.txt");
	        for (int i=0; i<n; i++)	        	
	        	f<<sp[i].getten()<<"\t"<<sp[i].getloai()<<"\t"<<
				   sp[i].getsiluong()<<"\t"<<sp[i].getgia()<<endl; 
	        f.close();	
			cout<<"Save data to file - Done...!"<<endl;			        
		}
};
#endif
