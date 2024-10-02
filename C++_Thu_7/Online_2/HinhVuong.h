#ifndef HINHVUONG_H
#define HINHVUONG_H
#include "HinhHoc.h"
#include <iostream>
#include <string.h>
using namespace std;

class HinhVuong : public HinhHoc{
	private:
		float c;
	public:
		HinhVuong(string name,string color, float c) : HinhHoc(name, color){
			this -> c = c;
		}		
		float CV_HV(){
			return 4*c;
		}
		float  DT_HV(){
			return c*c;
		}
		void print_HV(){
			printHinhHoc();
			cout <<"chu Vi HV: "<< CV_HV() << endl;
			cout <<"dien tich HV: "<< DT_HV() << endl;
		}
};
#endif


