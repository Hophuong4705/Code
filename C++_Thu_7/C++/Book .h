#define BOOK_H

#include "Product.h"
#include <iostream>
#include <iomanip>

class Book : public Product {
  private:
    float price;

  public:
    Book(string id, string name, int amount, float price)
        : Product(id, name, amount), price(price) {}

    float getPrice() { return price; }

    void printinFo() override {
        Product::printinFo();
        cout << fixed << setprecision(1) << price << endl;
    }
};

#endif
