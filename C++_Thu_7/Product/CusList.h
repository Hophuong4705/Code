#include "Custom.h"
#include <vector>
#include <fstream>
class CusList{
private:
    vector<Custom> list;
public:
    void read(){
        ifstream file("Custom.txt");
        string id,name;
        float total;
        while(file>>id>>name>>total){
            list.push_back(Custom(id,name,total));
        }
        file.close();
    }
    void print(){
        cout<<"ten\ttongtien";
        for (Custom cus : list){
            cus.display();
        }
    }
    void sort(){
        for (int i=0; i<list.size()-1;i++)
            for (int j=i+1;j<list.size();j++)
            if (list[i].getTotal()<list[j].getTotal()) swap(list[i],list[j]);
    }
    void write(){
        ofstream file("Custom.txt");
        for(Custom cus:list){
            file<<cus.getIdC()<<"\t"<<cus.getNameC()<<"\t"<<cus.getTotal()<<"\n";
        }
        file.close();
    }
};