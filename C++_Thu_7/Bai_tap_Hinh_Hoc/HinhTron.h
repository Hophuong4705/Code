#ifndef HINHTRON_H
#define HINHTRON_H
#include "HinhHoc.h"
#include <iostream>
const float PI = 3.14;

class HinhTron : public HinhHoc{
	private:
		float r;
	public:
		HinhTron(std::string name,  std::string color, float r) : HinhHoc(name, color) {
        this->r = r;
    }
    float chuviht(){
    	return 2*r*PI;
	}
	float dientichht(){
		return r*r*PI;
	}
	void print_HT(){
		printHinhHoc();
		std::cout <<"chu vi HT: "<< chuviht() << std::endl;
		std::cout <<"dien tich HT: "<< dientichht() << std::endl;
	}	
};
#endif

