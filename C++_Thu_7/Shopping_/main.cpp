#include"ProductList.h"
#include "CustomList.h"
#include "Basket.h"
int option();
int main(int argc, char** argv) {
	ProductList s;
	CustomList c ;
    while (true){    
		int opt=option();
		if  (opt==0) break;  
        switch(opt){
            case 1: s.loadProductfromFile(); 
					cout<<"Load Product from file - Done...!"<<endl;
					break;
			case 2: s.printProductList();   	break;
			case 3: c.loadCustomfromFile();
		     cout<<"Load Custom from file - Done...!"<<endl;   		break;
            case 4: c.printCustomList();   			break;      
            default:  break;
        };        
    } 
    s.clearList();
	return 0;
}
//------------------------------------------------
int option(){
	cout << "\n ======== MENU ======== " <<endl;
    cout<<"1. Read all product from file"<<endl;
    cout<<"2. Print all Product"<<endl;
    cout<<"3. Read all Custom from file "<<endl; 
    cout<<"4. Print all Custom"<<endl;
    cout<<"5. Shopping time "<<endl; 
    cout<<"6. update CustomList"<<endl; 
    cout<<"0. Exit"<<endl;
    cout <<"your option (0-6): ";
    int opt;    cin>>opt;    cin.ignore();
    return opt;
}
//================================





