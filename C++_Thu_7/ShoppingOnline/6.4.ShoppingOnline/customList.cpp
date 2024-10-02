#include <fstream>
#include "custom.cpp"

class CustomList{
  private:
    int n = 0;
    Custom *ct = new Custom[50];

  public:
    CustomList(){
        ifstream f;    f.open("custom.txt");
        string id, name; float total;
        while (!f.eof()){
            f >> id >> name >> total;           
            ct[n++] = Custom(id, name, total);
        }
        f.close();
    }
    ~CustomList(){
        n = 0;  delete ct;
    }
    void getCustomList(){
        for (int i = 0; i < n; i++)
            ct[i].getCustom();
    }
    void setN(int n){
        this->n = n;
    }
    void getCustomListSort(){
        int i,j;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(ct[i].getTotal()<ct[j].getTotal()){
                    Custom temp = ct[i];
                    ct[i] = ct[j];
                    ct[j] = temp;
                }
            }
        }
        for(i=0;i<n;i++)
            ct[i].getCustom();
        
    }
    
    float getTotalCustom(string id){
        for(int i=0;i<n;i++){
            if(ct[i].getId()==id){
                return ct[i].getTotal();
            }
        }
        return 0;
    }
    void setCustom(string id, float total){
        for(int i=0;i<n;i++){
            if(ct[i].getId()==id){
                ct[i].setTotal(total);
            }
        }
    }
    int getN(){
        return n;
    }
    string getId(int index){
        return ct[index].getId();
    }
    string getName(int index){
        return ct[index].getName();
    }
    float getTotal(int index){
        return ct[index].getTotal();
    }
};
//============================================
