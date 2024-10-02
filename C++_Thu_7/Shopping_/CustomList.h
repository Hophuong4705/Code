#ifndef CUSTOMLIST_H
#define CUSTOMLIST_H
#include <fstream>
#include <vector>
#include <iostream>
#include "Custom.h"
class CustomList{
  private:
    	vector <Custom> s;
  public:
  		void loadCustomfromFile(){
	  		ifstream f; 	f.open("Chill.txt");
	        string idC, nameC; float total;
	        while (!f.eof()){ 
	             f >> idC >> nameC >> total; 
				Custom t = Custom(idC,nameC,total);  
				s.push_back(t);  	
	        }
	        f.close();
			s.resize(s.size()-1);		        
		}
		
				
		
		void printCustomList(){	
			for (int i=0; i<s.size(); i++)	
				s[i].printCustom();
			
		}
		
	
		void clearList(){
			 s.clear();
		}
};
#endif

