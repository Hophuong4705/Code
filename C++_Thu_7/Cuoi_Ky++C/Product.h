#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;
class Product{
	private:
		string id;
		string name;
		int amount;
	public:
		Product(string id, string name, int amount){
			this->id = id;
			this->name = name;
			this->amount = amount;
		}
		string getid(){return id;}
		string getName(){return name;}
		int getAmount(){return amount;}
		virtual float getPrice(){};
		virtual void printinFo(){
			cout<<"ID: \t"<<id<<"Name: \t"<<name<<"Amount: \t"<<amount<<endl;
		}
};
#endif

