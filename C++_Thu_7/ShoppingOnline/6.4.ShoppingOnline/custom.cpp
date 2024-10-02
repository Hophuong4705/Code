#include <string>
using namespace std;

class Custom{
  private:
    string id, name;
    float total;

  public:
    Custom(string id = "", string name = "", float total = 0){
        this->id = id;
        this->name = name;
        this->total = total;
    }
    ~Custom(){
        id = name = "";
        total = 0;
    }
    void getCustom(){
        cout << id << "\t" << name << "\t" << total << endl;
    }
    float getTotal(){
        return total;
    }
    string getId(){
        return id;
    }
    string getName(){
        return name;
    }
    void setTotal(float total){
        this->total = total;
    }
    Custom operator =(Custom ct){
        id = ct.getId();
        name = ct.getName();
        total = ct.getTotal();
    }
};
//============================================
