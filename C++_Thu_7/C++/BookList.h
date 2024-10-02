#ifndef BOOKLIST_H
#define BOOKLIST_H
#include "Book.h"
#include <vector>
#include <fstream>
#include <algorithm>

class BookList {
private:
    vector<Book> books;

public:
    void readFromFile(const string& filename) {
        ifstream file(filename);
        if (!file) {
            cerr << "Error opening file." << endl;
            return;
        }

        string id, name;
        int amount;
        float price;
        while (file >> id >> name >> amount >> price) {
            books.emplace_back(id, name, amount, price);
        }

        file.close();
    }

    void displayBooks() {
        for (const auto& book : books) {
            book.printInfo();
        }
    }

    void addBook(const Book& book) {
        books.push_back(book);
    }

    void findBooksByAmount(int threshold) {
        for (const auto& book : books) {
            if (book.amount >= threshold) {
                book.printInfo();
            }
        }
    }

    void sortByTotalValue() {
        sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
            return (a.amount * a.price) > (b.amount * b.price);
        });

        for (const auto& book : books) {
            book.printInfo();
        }
    }
};

#endif // BOOKLIST_H
