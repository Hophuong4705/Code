#ifndef HINHTRON_H
#define HINHTRON_H
#include "HinhHoc.h"
#include <iostream>
using namespace std;
const float PI = 3.14;

class HinhTron : public HinhHoc{
	private:
		float r;
	public:
		HinhTron(string name, string color, float r) : HinhHoc(name, color) {
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
		cout <<"chu vi HT: "<< chuviht() <<endl;
		cout <<"dien tich HT: "<< dientichht() <<endl;
	}	
};
#endif


