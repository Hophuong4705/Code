#ifndef HINHVUONG_H
#define HINHVUONG_H
#include "HinhHoc.h"
#include <iostream>
#include <string.h>


class HinhVuong : public HinhHoc{
	private:
		float c;
	public:
		HinhVuong(std::string name, std::string color, float c) : HinhHoc(name, color){
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
			std::cout <<"chu Vi HV: "<< CV_HV() << std::endl;
			std::cout <<"dien tich HV: "<< DT_HV() << std::endl;
		}
};
#endif

