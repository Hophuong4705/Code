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
			fstream f;	f.open("C:\Users\HELLO\OneDrive\TaÌi liêòu\Bai_Tap_C++\Nhap_1\data.txt", ios::in);
			n=0;
			string t, l; int sl; float g;
			while (!f.eof()) {
				f>>t>>l>>sl>>g; 
				sp[n++].createSanpham(t, l, sl, g);
			}
			f.close();
			cout<<"Load data form file - Done...!"<<endl;
        }
        void printSanpham(){
        	for(int i=0; i<n; i++){
        		cout<<i+1<<" ";  sp[i].printSanpham();
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
        while (j >= 0 && sp[j].getG() > key.getG()) {
            sp[j + 1] = sp[j];
            j = j - 1;
        }
        sp[j + 1] = key;
        }
       }
       void saveSanphamFile(){
	  		ofstream f; 	f.open("C:\Users\HELLO\OneDrive\TaÌi liêòu\Bai_Tap_C++\Nhap_1\data1.txt");
	        for (int i=0; i<n; i++)	        	
	        	f<<sp[i].getT()<<"\t"<<sp[i].getL()<<"\t"<<
				   sp[i].getSL()<<"\t"<<sp[i].getG()<<endl; 
	        f.close();	
			cout<<"Save data to file - Done...!"<<endl;			        
		}
};
#endif

