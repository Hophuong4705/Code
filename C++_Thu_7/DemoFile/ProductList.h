#ifndef PRODUCTLIST_H
#define PRODUCTLIST_H
#include <fstream>	
#include "Product.h"

class ProductList{
	private:
		int n;
		Product p[50];
	public:
		//ProductList(){	}
		void importProducts(){
 			fstream f;	f.open("data.txt", ios::in);
			n=0;
			string m, t; int sl; float dg;
			while (!f.eof()) {
				f>>m>>t>>sl>>dg; 
				p[n++].createProduct(m, t, sl, dg);
			}
			f.close();
			cout<<"Load data form file - Done...!"<<endl;
		}
		void printProducts(){
			for(int i = 0; i < n; i++){
				cout <<i+1<<". ";		p[i].printProduct();
			}
			cout<<"Co "<<n<<" san pham"<<endl;
		}
		void updateProducts(){
			int k;
			cout<<"Nhap so luong san pham dau tien: "; cin>>k;
			p[0].setSL(k);
			cout<<"Update p[0] - Done";
		}
		void sortProducts(){
		}
		void saveProductstoFile(){
	  		ofstream f; 	f.open("data1.txt");
	        for (int i=0; i<n; i++)	        	
	        	f<<p[i].getM()<<"\t"<<p[i].getT()<<"\t"<<
				   p[i].getSL()<<"\t"<<p[i].getDG()<<endl; 
	        f.close();	
			cout<<"Save data to file - Done...!"<<endl;			        
		}
};
#endif
