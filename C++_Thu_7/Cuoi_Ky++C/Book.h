#ifndef BOOK_H
#define BOOK_H
#include <iomanip>
#include "Product.h"
using namespace std;
class Book : public Product{
	private:
		float price;
	public:
		Book(string id, string name, int amount, float price)
		  : Product(id, name, amount), price(price) {}
		  
		float getPrice() { return price;}
		void printinFo()  {
            Product::printinFo();
            cout << fixed << setprecision(1) << price << endl;
    }
};
#endif