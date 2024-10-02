#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include "Book.h"

using namespace std;

class BookList {
private:
    vector<Book> books;
public:
    void Doc_file() {
        string id, name;
        int amount;
        float price, total;
        ifstream file("data.txt");
        while (file >> id >> name >> amount >> price) {
            books.emplace_back(id, name, amount, price);
        }
        file.close();
        cout << "Loaded " << books.size() << " books!" << endl;
    }

    void displayBooks() {
        for (int i=0; i<books.size();i++) {
            books[i].printinFo();
        }
    }

    void addBook() {
    		//nhap du lieu o day
        //books.emplace_back(id, name, amount, price);
    }

    void tim()  {
        cout << "\nBooks with amount >= 20:\n";
        for (int i=0; i<books.size();i++) {
            if (books[i].getAmount() >= 20) {
                books[i].printinFo();
                cout << "\n";
            }
        }
    }

    void Doanhthu() {
        vector<float> total;
        for (int i=0; i<books.size();i++) {
            total.push_back(books[i].getAmount() * books[i].getPrice());
        }
        for (size_t i = 0; i < total.size(); i++) {
            for (size_t j = i + 1; j < total.size(); j++) {
                if (total[i] > total[j]) {
                    swap(books[i], books[j]);
                    swap(total[i], total[j]);
                }
            }
        }
        for (size_t i = 0; i < total.size(); i++) {
            cout << books[i].getName() << " " << total[i] << endl;
        }
    }
};

