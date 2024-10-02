#ifndef GIAOKHOA_H
#define GIAOKHOA_H
#include <iostream>
using namespace std;

class GiaoKhoa {
private:
    string mon;
public:
   GiaoKhoa() : mon("") {}
   GiaoKhoa(string mon) : mon(mon) {}
   string getMon(){
   	   return mon;
   }
   void InfoMon(){
			cout << "\t" << mon;			
		} 
};

#endif

