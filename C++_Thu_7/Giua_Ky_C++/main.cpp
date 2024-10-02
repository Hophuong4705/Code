#include "BookList.h"
void menu(){
    cout<<"\n-------------\n";
    cout<<"1.Doc du lieu\n"
        <<"2.In thong tin\n"
        <<"3.Doanh thu moi loai\n"
        <<"4.Tim sach\n"
        <<"5.Sap xep sach\n"
        <<"6.In sach giao khoa vao file giaokhoa.txt\n"
        <<"7.Thoat\n"
        <<"nhap luu chon: ";
}
BookList book;
string sach;
void control(){
    int k;
    cin>>k;
    switch (k){
    case 1:
        book.Nhap();
        break;
    case 2:
        book.xuat();
        break;
    case 3:
        book.Doanhthu();
        break;
    case 4:
        cout<<"nhap ten sach muon tim";
        cin>>sach;
        book.Tim(sach);
        break;
    case 5:
        book.SapXep();
        break;
    case 6:
        book.in();
        break;
    case 7:
        exit(0);
        break;
    default:
        break;
    }
}
main(){
    while(true){
        menu();
        control();
    }   
    
}