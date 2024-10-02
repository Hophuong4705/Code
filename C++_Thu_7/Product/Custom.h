#ifndef CUSTOM_H
#define CUSTOM_H
#include <iostream>
#include <string>
using namespace std;
class Custom {
private:
    string idC;
    string nameC;
    float total;

public:
    // Constructor
    Custom(string idC, string nameC, float total){
        this->idC=idC;
        this->nameC=nameC;
        this->total=total;   
    }

    // Getter for idC
    string getIdC() const {
        return idC;
    }

    // Getter for nameC
    string getNameC() const {
        return nameC;
    }

    // Getter for total
    float getTotal() const {
        return total;
    }
    void display(){
        cout<<nameC<<"\t"<<total<<"\n";
    }
};
#endif