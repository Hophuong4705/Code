#ifndef CUSTOM_H
#define CUSTOM_H
#include <iostream>
#include <string>

using namespace std;

class Custom {
private:
   string idC , nameC;
   float total; 
public:
	Custom(){}
		Custom(string idC , string nameC, float total){
			        this->idC = idC;
					this->nameC = nameC;
					this->total = total;
		
		}
		string getIdC()		{	return idC;		}
		string getNameC()	{	return nameC;	}		
		float getTotal()	{	return total;	}		
	
		
		void printCustom(){
			cout<<idC<<"\t"<<nameC<<"\t"<< total<<"\t "<<endl;			
		} 
   
};

#endif

