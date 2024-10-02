#ifndef HINHCHUNHAT_H
#define HINHCHUNHAT_H
#include "HinhHoc.h"
#include <iostream>
using namespace std;
class HinhChuNhat : public HinhHoc{
	private:
		float d;
		float e;
	public:
		HinhChuNhat(string name, string color, float d, float e) : HinhHoc(name, color){
			this -> d = d;
			this -> e = e;
		}
		float chuvihcn(){
			return (d+e)*2;
		}
		float dientichhcn(){
			return d*e;
		}
		void print_HCN(){
			printHinhHoc();
		    cout <<"chu vi HCN: "<< chuvihcn() <<std::endl;
			cout <<"dien tich HCN: "<< dientichhcn() <<std::endl;
		}
};
#endif

