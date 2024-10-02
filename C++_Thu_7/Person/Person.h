#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

class Student {
private:
    string name;
    string major;
    long long id;
    int mark;
public:
	int getID(){
		return id;
	}
    void Nhap();
    void Seeking();	
    void prints(ofstream &outputFile) ;
    void Seeking(ofstream &outputFile, string s);
    void Add(ofstream &outputFile);
    void Delete(ofstream &outputFile,long long x);
    
};

