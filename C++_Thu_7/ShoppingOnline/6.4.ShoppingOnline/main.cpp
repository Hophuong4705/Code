#include <iostream>
#include "basket.cpp"

void showProductList(){
	ProductList pl();
	pl.getProductList();
}
void showCustomList(){    
	CustomList ctl();
	ctl.getCustomList();
}
void buyProduct(){
	ProductList pl();
	CustomList ctl();
	Basket bk(pl,cts);
	bk.addBasket();
	bk.pay();
}
void showCustomListSort(){    
	CustomList ctl();
	ctl.getCustomListSort();
}

void int option(){
	cout << "\n =================MENU================= ";
    cout<<"1. Thong tin san pham"<<endl;
    cout<<"2. Thong tin khach hang"<<endl;
    cout<<"3. Mua hang"<<endl;
    cout<<"4. Khach hang (giam dan cua tong tien)"<<endl;
    cout<<"5. Thoat"<<endl<<endl;
    cout <<"Lua chon ... ";
    int opt;    cin>>opt;    cin.ignore();
    return opt;
}

void run(){
    bool flag = true;    
    do{        
        switch(option()){
            case 1:
                showProductList();                
                break;
            case 2:
                showCustomList();                
                break;
            case 3:
                buyProduct();                
                break;
            case 4:
                showCustomListSort();                
                break;
            default:
                flag = false;
                cout << "\n ==========END========= \n";
                break;
        };
    } while(flag==true);
    
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	run();
	return 0;
}
