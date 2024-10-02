#include <string>
using namespace std;

class Product{
  private:
    string id, name;
    float price, amount;

  public:
    Product(string id = "", string name = "", float price = 0, float amount = 0){
        this->id = id;
        this->name = name;
        this->price = price;
        this->amount = amount;
    }
    ~Product(){
        id = name = "";
        price = amount = 0;
    }
    void setAmount(float amount){
        this->amount=amount;
    }
    string getId(){
        return id;
    }
    string getName(){
        return name;
    }
    float getPrice(){
        return price;
    }
    float getAmount(){
        return amount;
    }
    void getProduct(){
        cout << id << "\t" << name << "\t" << price << "\t" << amount << endl;
    }
};
//==========================================================
