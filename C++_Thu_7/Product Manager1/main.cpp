#include "ProductList.h"

int option(){
	int opt;
	cout << "\n-----Menu-----\n";
	cout << "1. Read data from File \n";
	cout << "2. List products by Type \n";
	cout << "3. Find Product with max total\n";
	cout << "4. Sort product & save to File \n";
	cout << "0. Exit \n";
	cout << "Your option (0-4): ";	cin >> opt;
	return opt;
}

int main(){
	ProductList a;	
	while (true){ 
		int opt=option();
		if  (opt==0) break;  
		switch(opt){
			case 1:	a.loadProductsFromFile();	break;
			case 2:	a.printProducts();			break;
			case 3: a.
					break;
			case 4:	a.sortProducts();
					a.saveProductstoFile();		break;
			default:							break;
		}
	} 
    return 0;
}


