#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include <fstream>	
#include "Product.h"

class ProductList{
	private:
		int n;
		Product p[50];
	public:
		void loadProductsFromFile(){
 			ifstream f;	f.open("data1.txt");
			n=0;
			string t, l; int sl; float dg;
			while (!f.eof()) {
				f>>t>>l>>sl>>dg; 
				p[n++].createProduct(t, l, sl, dg);
			}
			f.close();
			cout<<"Load data form file - Done...!"<<endl;
		}
		void saveProductstoFile(){
	  		ofstream f; 	f.open("data2.txt");
	        for (int i=0; i<n; i++)	        	
	        f.close();	
			cout<<"Save data to file - Done...!"<<endl;			        
		}
		void printProducts(){			
		}
		void sortProducts(){
		}
		
};
#endif
