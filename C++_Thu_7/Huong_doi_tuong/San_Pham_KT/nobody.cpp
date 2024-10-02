#include "ProductList.h"
#include <iostream>
int option(){
	int opt;
	cout << "\n-----Menu-----\n";
	cout << "1. List products \n";
	cout << "2. Update product \n";
	cout << "3. Sort product \n";
	cout << "4. Save product to file \n";
	cout << "0. Exit \n";
	cout << "Your option (0-4): ";	cin >> opt;
	return opt;
}

int main(){
	ProductList a;
	a.importProducts();	

	while (true){ 
		int opt=option();
		if  (opt==0) break;  
		switch(opt){
			case 1:
				a.printProducts();		break;
			case 2:
				a.updateProducts();		break;
			case 3:
				a.sortProducts();		break;
			case 4:
				a.saveProductstoFile();	break;
			default:					break;
		}
		
	} 
    return 0;
}

