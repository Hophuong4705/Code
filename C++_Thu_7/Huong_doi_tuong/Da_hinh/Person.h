#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string.h>
using namespace std;

class Person {
	protected :
		string name  ;
		int age ;
	public :
		Person(string name, int age){
			this -> name = name ;
			this -> age = age ;
		}
		
		void printInfo(){
			cout << "Info :"<< name << " "<< endl;
		}
		
};

#endif