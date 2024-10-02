
#include "Booklist.h"

int main() {
    BookList bookList;

    
    bookList.readFromFile("data.txt");

   
    cout << "All books:" << endl;
    bookList.displayBooks();
    cout << endl;

    
    Book newBook("X", "NewBook", 30, 10.0);
    bookList.addBook(newBook);

    
    cout << "Books with amount >= 20:" << endl;
    bookList.findBooksByAmount(20);
    cout << endl;

   
    cout << "Books sorted by total value (amount * price):" << endl;
    bookList.sortByTotalValue();

    return 0;
}
