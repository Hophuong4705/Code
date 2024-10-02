#ifndef BASKET_H
#define BASKET_H
#include <iostream>
#include <string>

using namespace std;

class Basket{
	private:
		string idC;
	public:
		Basket(){}
			Basket(string idC){
				this->idC = idC;
			}
			string getIdC() { return idC};
			void printBasket(){
				cout<<idC<<"\t "<<endl;
			}
};

#endif

