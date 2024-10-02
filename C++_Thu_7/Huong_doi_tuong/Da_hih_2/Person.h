#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
		Person(string name, int age){
			this -> name = name;
			this -> age = age;
		}
		string getN(){
			return name;
		}
		int getT(){
			return age;
		}
		void Nhap(){
			cout<<"Ten: ";
			cin.ignore();
			getline(cin, this->name);
			cout<<"Tuoi: ";
			cin>>this ->age;
		}
		virtual void printInfo(){
			cout<<"\t Ten: "<<this->name<<"\t Tuoi: "<<this->age<<endl;
		}

};
#endif
