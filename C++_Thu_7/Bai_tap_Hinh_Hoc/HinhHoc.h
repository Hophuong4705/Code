#ifndef HINHHOC_H
#define HINHHOC_H
#include <iostream>
#include <string.h>
using namespace std;

class HinhHoc {
	protected :
		string name ;
		string color;
	public :
		HinhHoc(string name, string color){
			this -> name = name;
			this -> color = color;
		}
		
		void printHinhHoc(){
			cout << "Info : "<< name << endl;
			cout << "mau: "<<color <<endl; 
		}

};

#endif
