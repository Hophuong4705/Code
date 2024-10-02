#include "BookList.h"

int main() {
    BookList b;
    int choice;      bool run=true;
    
    while(run){
        cout << "-------------------Menu--------------------- \n";
        cout << "1. Doc file data.txt \n";
        cout << "2. Xuat thong tin \n";
        cout << "3. addBook \n";
        cout << "4. Tim sach \n";
        cout << "5. Doanh Thu \n";
        cout << "6. Exit \n";
        cout << "Nhap lua chon (1-6): ";     cin >> choice;

        switch(choice) {
            case 1:   b.Doc_file;      break;
            case 2:   b.displayBooks;       break;
            case 3:   b.addBook();     break; 
            case 4:   b.tim();        break;
            case 5:   b.Doanhthu();   break;
            case 6:   run= false; 		  break;
        }
        cout<<endl;
    } 
    return 0;
}
