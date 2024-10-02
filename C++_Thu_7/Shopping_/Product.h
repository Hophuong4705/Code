#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string.h>
using namespace std;

class Product {
private:
    string id, name ;
   float price, amount;
public:
   	Product(){}
		Product(string id , string name, float price, float amount){
			        this -> id = id;
					this->name = name;
					this->price = price;
					this->amount = amount;
		
		}
		string getId()		{	return id;		}
		string getName()	{	return name;	}		
		float getPrice()	{	return price;	}		
		float getAmount()	{	return amount;	}
		
		void inputProduct(){
			cout<<"input ID:    "; cin>>id;	cin.ignore();
			cout<<"input Name:  "; cin>>name;	cin.ignore();
			cout<<"input Price:";  cin>> price;			
			cout<<"input Amount:  ";cin>>amount;
		}	
		void printProduct(){
			cout<<id<<"\t"<<name<<"\t"<<price<<"\t"<<amount<<"\t "<<endl;			
		} 
};

#endif

