#ifndef THAMKHAO_H
#define THAMKHAO_H
#include <iostream>
using namespace std;
class ThamKhao {
private:
  int lop;
public:
   ThamKhao() : lop(0) {}
   ThamKhao(int lop) : lop(lop) {}
   int getLop(){
   	   return lop;
   }
   void InfoLop(){
			cout << "\t" << lop;			
		} 
};
#endif
