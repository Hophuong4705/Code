#include "Product.h"
#include <vector>
#include <fstream>
class ProList{
private:
    vector<Product> list;
public:
    void read(){
        ifstream file("Product.txt");
        string id,name;
        float price,amount;
        while(file>>id>>name>>price>>amount){
            list.push_back(Product(id,name,price,amount));
        }
        file.close();
    }
    void print(){
        cout<<"ten\tsoluong\tgia";
        for (Product product : list){//duyệt qua vector (tự thay lại bằng đoạn mã thường dùng)
            product.display();
        } 
    }
};