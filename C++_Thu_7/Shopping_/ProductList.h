#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include <fstream>
#include <vector>
#include <iostream>
#include "Product.h"
class ProductList{
  private:
    	vector <Product> s;
  public:
  		void loadProductfromFile(){
	  		ifstream f; 	
			f.open("ViVu.txt");
	        string id, name; float price , amounts;
	        while (!f.eof()){ 
	             f >> id >> name >> price >> amounts; 
				Product t = Product(id,name,price,amounts);  
				s.push_back(t);  	
	        }
	        f.close();
			s.resize(s.size()-1);		        
		}
		
				
		
		void printProductList(){	
			for (int i=0; i<s.size(); i++)	
				s[i].printProduct();
			
		}
		

				
		void clearList(){
			 s.clear();
		}
};
#endif

