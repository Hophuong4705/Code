#include "customList.cpp"
#include "productList.cpp"

class Basket{
  private:
    string idCustom;
    ProductList basket;

  public:
    Basket(){        
    }
    ~Basket(){
        idCustom = "";
        basket.~ProductList();
    }
    
    void addBasket(ProductList pl){		
		string id,name ;   float price, amount, amountBuy=0;
 		bool exist = false;
 		do{
 			cout << "id product ";  getline(cin, id);            
        	int i=0;
			while(i<pl.getN()) {
            	if(pl.getId(i)==id){	
					name = pl.getName(i);
					price = pl.getPrice(i);
					amount = pl.getAmount(i);
					exist=true; break;
				}
            	i++;
        	}
        	if(exist==false) cout << "Product not exist! \n";       
        } while(exist==false);
        
        do{
        	cout << "Amount product ";   cin >> amountBuy;    cin.ignore();
        	if (amountBuy> amount)
        		cout << "Exceeded limits!";         	
        } while (amountBuy>amount);
        
		basket.setProduct(i, bid, bname, bprice );
    }
    void addsBasket(ProductList pl, CustomList ctl){
    	cout << "id Custom "; 	getline(cin, idCustom);
        string key="1";
        cout << "1 to continue, orther to exit ";
        cin >> key;
        cin.ignore();
        if(key=="1"){
            do{
                addProduct();
                cout << "1 to continue, orther to exit ";
                cin >> key;
                cin.ignore();
            } while(key=="1");
        }
    }
    void getBasket() {
        cout << "Id custom " << id << endl;
        bas.getProductList();
    }
    float sTotal(){
        float s = 0;
        int n = bas.getN();
        for(int i=0;i<n;i++){
            s+=bas.getTotalCustom(i);
        }
        return s;
    }
    void pay(){
        CustomList ctl(path+custom);
        float total = sTotal();
        float ctotal = ctl.getTotalCustom(id);
        
        if(total>ctotal){
            cout << "You have not got the money\n";
        } else {
            //setup
            ctl.setCustom(id, ctotal-total);
            ProductList pl(path+product);
            int nb = bas.getN();
            int npl = pl.getN();
            for(int i=0;i<nb;i++){
                for(int j=0;j<npl;j++){
                    if(bas.getId(i)==pl.getId(j)&&bas.getName(i)==pl.getName(j)){
                        pl.setAmount(j,pl.getAmount(j)-bas.getAmount(i));
                        break;
                    }
                }
            }
            //~Basket();
            id = "";
            bas.~ProductList();
            //save
            fstream f;
            f.open(path+product);
            int i=0;
            while(i<npl){
                f<<pl.getId(i);
                f<<"\t";
                f<<pl.getName(i);
                f<<"\t";
                f<<pl.getPrice(i);
                f<<"\t";
                f<<pl.getAmount(i);
                if(i!=npl-1)
                    f<<"\n";
                i++;
            }
            f.close();
            f.open(path+custom);
            i=0;
            int nctl = ctl.getN();
            while(i<nctl){
                f<<ctl.getId(i);
                f<<"\t";
                f<<ctl.getName(i);
                f<<"\t";
                f<<ctl.getTotal(i);
                if(i!=nctl-1)
                    f<<"\n";
                i++;
            }
            f.close();
            cout << "Suceededfull transaction\n";
        }
        
    }
};
//==========================================
