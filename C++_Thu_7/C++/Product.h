#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string id;
    string name;
    int amount;

    Product(string id, string name, int amount) : id(id), name(name), amount(amount) {}

    virtual void printInfo() {
        cout << "ID: " << id << ", Name: " << name << ", Amount: " << amount << endl;
    }
};

#endif // PRODUCT_H
