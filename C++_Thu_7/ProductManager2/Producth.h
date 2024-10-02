#include<iostream>
using namespace std;
class Product
{
protected:
	string ma, ten;
	int soluong;
public:
	Product();
	Product(string ma, string name, int soluong) {
		this->ma = ma;
		this->soluong = soluong;
		this->ten = name;
	}
	void printInfo() {
		cout << "ten: " << ten;
		cout << "\n ma: " << ma;
		cout << "\n soluong: " << soluong;
	}
	string getMa() { return ma; }
	string getName() { return ten; }
	int getSoluong() { return soluong; }
};
