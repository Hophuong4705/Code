#ifndef SACHLIST_H
#define SACHLIST_H
#include <fstream>
#include <vector>
#include <iostream>
#include <sstream> 
#include <cctype>  
#include <algorithm>
#include "Sach.h"
#include "ThamKhao.h"
#include "GiaoKhoa.h"
using namespace std;

class Sachlist {
  private:
    	vector<Sach> s;
    	vector<ThamKhao> u;
    	vector<GiaoKhoa> gk;
  public:
  		void loadSachfromFile(){
	  		ifstream f; 	
			f.open("C:\\Users\\ACER\\Desktop\\BaiThiGiuaKy\\data.txt");
	        if (!f) {
	        	cerr << "Unable to open file data.txt";
	        	return;
	        }
	        string ten, loai;
	        int soluong;
	        float donGia;
	        string lastToken;

	        while (f >> ten >> loai >> soluong >> donGia >> ws) {
	            getline(f, lastToken);
	            bool isNumber = true;

	            for (size_t i = 0; i < lastToken.length(); i++) {
	                char c = lastToken[i];
	                if (!isdigit(c) && !isspace(c)) {
	                    isNumber = false;
	                    break;
	                }
	            }

	            if (isNumber) {
	                stringstream ss(lastToken);
	                int lop;
	                ss >> lop;
	                Sach t = Sach(ten, loai, soluong, donGia);
	                ThamKhao y = ThamKhao(lop);
	                GiaoKhoa g = GiaoKhoa("");
	                s.push_back(t);
	                u.push_back(y);
	                gk.push_back(g);
	            } else {
	                Sach t = Sach(ten, loai, soluong, donGia);
	                ThamKhao y = ThamKhao(0); 
	                GiaoKhoa g = GiaoKhoa(lastToken);
	                s.push_back(t);
	                u.push_back(y);
	                gk.push_back(g);
	            }
	        }
	        f.close();       
		}
		
		void printSachlist(){	
			for (size_t i = 0; i < s.size(); i++){
				s[i].InfoSach();
				if (i < u.size() && u[i].getLop() != 0) {
					u[i].InfoLop();
				}
				if (i < gk.size() && !gk[i].getMon().empty()) {
					gk[i].InfoMon();
				}
				cout << endl;
			}
		}
		
		void searchBook(){
    string myname;
    cout << "Input a name: ";
    cin >> myname;
    cin.ignore(); 
    
    bool found = false;
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i].getTen() == myname) {
            s[i].InfoSach();
            if (i < u.size() && u[i].getLop() != 0) {
                u[i].InfoLop();
            }
            if (i < gk.size() && !gk[i].getMon().empty()) {
                gk[i].InfoMon();
            }
            cout << endl;
            found = true;
            break; 
        }
    }
    if (!found) {
        cout << "Not found this book!" << endl;
    }
}

      void DoanhThu() {
        float totalRevenueT = 0.0;
        float totalRevenueG = 0.0;

       
        for (size_t i = 0; i < s.size(); i++) {
            float revenue = s[i].getDonGia() * s[i].getSoLuong();
            if (s[i].getLoai() == "T") {
                totalRevenueT += revenue;
            } else if (s[i].getLoai() == "G") {
                totalRevenueG += revenue;
            }
        }

      
        cout << "Total revenue for textbooks (T): " << totalRevenueT << endl;
        cout << "Total revenue for reference books (G): " << totalRevenueG << endl;
    }



		void clearList(){
			 s.clear();
			 u.clear();
			 gk.clear();
		}
};

#endif

