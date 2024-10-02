#include "Custom.h"
#include "Product.h"
#include "CusList.h"
#include "ProList.h"
#include <vector>
using namespace std;
class Basket{
private:
    string name;
    vector<Product> basket;
public:
    Basket(string name){this->name=name;}
    void add(Product pro){
        basket.push_back(pro);
    }
    void add(string id, int sl){
        basket.push_back(Product(id,sl));
    }
    
};