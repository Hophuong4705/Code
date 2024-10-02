#include <vector>
#include <fstream>

#include "Book.h"

class BookList{
	private:
		vector<Product*> book;
	public:
		void Nhap(){
			string id, name, st;
			int amount;
			float price, total;
			ifstream file("data.txt");
			if (!file.is_open()) cout << "fail";
               else cout << "done";
               while (file >> id >> name >> amount >> price) {
               book.push_back(new Book(id, name, amount, price));
         }
			file.close();
    }
		void xuat() {
            for (int i = 0; i < book.size(); i++) {
            book[i]->printinFo();
            cout << endl;
        }
    }
          void addBook(const string& id, const string& name, int amount, float price) {
          book.push_back(new Book(id, name, amount, price));
    }

   
    void addBookFromConsole() {
        string id, n;
        int a;
        float p;
        cin.ignore(); 
        cout << "Nhap id: ";
        getline(cin, id);
        cout << "Nhap name: ";
        getline(cin, n);
        cout << "Nhap amount: ";
        cin >> a;
        cout << "Nhap price: ";
        cin >> p;
        addBook(id, n, a, p);
    }

    void tim() {
        cout << "\nSach co amount >= 20:\n";
        for (int i = 0; i < book.size(); i++)
            if (book[i]->getAmount() >= 20) {
                book[i]->printinFo();
                cout << "\n";
            }
    }

    
   
    void Doanhthu() {
        vector <float> total;
        for (int i = 0; i < book.size(); i++) {
            total.push_back(book[i]->getAmount()*book[i]->getPrice());
        }
        for (int i = 0; i < total.size(); i++) {
            for(int j = i+1 ; j < total.size(); j++){
             if (total[i] > total[j]){
              swap(book[i],book[j]);
              swap(total[i],total[j]);
          }
      }
        }
         for (int i = 0; i < total.size(); i++) {
           cout<<book[i]->getName() << " " << total[i]<<endl;
        }
    }

};


		


