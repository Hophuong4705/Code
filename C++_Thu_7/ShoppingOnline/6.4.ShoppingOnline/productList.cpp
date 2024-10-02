#include <fstream>
#include "product.cpp"

class ProductList{
  private:
    int n = 0;
    Product *p = new Product[50];

  public:
    ProductList(){
        ifstream f; 	f.open("product.txt");
        string id, name; float price, amount;
        while (!f.eof()){
            f >> id >> name >> price >> amount;            
            p[n++] = Product(id, name, price, amount);
        }
        f.close();
    }
    ~ProductList(){
        n = 0;   delete p;
    }
    void getProductList(){
        for (int i = 0; i < n; i++)
            p[i].getProduct();
    }
    int getN(){
        return n;
    }
    void setN(int n){
        this->n = n;
    }
    void setN(){
        n++;
    }
    void getProduct(int index, string &id, string &name, float &price, float &amount){
        id = p[index].getId();
        name = p[index].getName();
        price = p[index].getPrice();
        amount = p[index].getAmount();
    }
    void setProduct(int index, string id, string name, float price, float amount){
        p[index] = Product(id, name, price, amount);
    }
    string getId(int index) {
        return p[index].getId();
    }
    string getName(int index) {
        return p[index].getName();
    }
    float getPrice(int index){
        return p[index].getPrice();
    }
    float getTotalCustom(int index){
        return p[index].getPrice()*p[index].getAmount();
    }
    void setAmount(int index, float amount){
        p[index].setAmount(amount);
    }
    float getAmount(int index){
        return p[index].getAmount();
    }
};
//============================================
