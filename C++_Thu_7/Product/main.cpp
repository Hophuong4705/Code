#include "ProList.h"
#include "CusList.h"
#include "Basket.h"
#include <iostream>
using namespace std;
ProList pros;
CusList cuss;

void buy(){
    string name;
    float sl;
    bool run=true;
    cout<<"nhap ten khach hang: ";
    cin>>name;
    Basket bas(name);
    pros.print();
    cout<<"Dien thong tin mua hang\nDe ket thuc nhap esc";
    while(run){
        cout<<"nhap id san pham: ";
        cin>>name;
        if(name=="esc") run=false;
        else {
        cout<<"nhap so luong: ";
        cin>>sl;
        }
        bas

    }
}

int main(){
    
    pros.read();
    cuss.read();
    while(1){

    }

}