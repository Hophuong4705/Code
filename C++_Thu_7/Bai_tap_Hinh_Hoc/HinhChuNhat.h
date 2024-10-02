#ifndef HINHCHUNHAT_H
#define HINHCHUNHAT_H
#include "HinhHoc.h"
#include <iostream>

class HinhChuNhat : public HinhHoc{
	private:
		float d;
		float e;
	public:
		HinhChuNhat(std::string name, std::string color, float d, float e) : HinhHoc(name, color){
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
			std::cout <<"chu vi HCN: "<< chuvihcn() <<std::endl;
			std::cout <<"dien tich HCN: "<< dientichhcn() <<std::endl;
		}
};
#endif
