#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;
class Product {
private:
    string id;
    string name;
    float price;
    float amount;

public:
    // Constructor
    Product(string id, string name, float price, float amount){
        this->id=id;
        this->name=name;
        this->price=price;
        this->amount=amount;
    }
    Product(string id,float price){
        this->id=id;
        this->price=price;
    }

    // Getter for id
    string getId() const {
        return id;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for price
    float getPrice() const {
        return price;
    }

    // Getter for amount
    float getAmount() const {
        return amount;
    }
    void display(){
        cout<<name<<"\t"<<price<<"\t"<<amount<<"\n";
    }
};
#endif