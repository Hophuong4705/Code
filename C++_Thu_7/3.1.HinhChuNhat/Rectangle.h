#include <iostream>
using namespace std;
class Rectangle {
	private:  
		int x,y ;
	public:
		Rectangle(int k){
           x=y=k; 
	 	}
	 	Rectangle(int x, int y){
           this->x=x; 
		   this->y=y;
	 	}
		~Rectangle(){
           x=y=0;
	 	}
	 	void setX(int x){	this->x=x;}
	 	void setY(int y){	this->y=y;}
	 	int getX(){	return x;}
	 	int getY(){	return y;}
	 	
	  	int dientich()	{ 
	  		//this->nhap(4,2);
			return x*y;
		}
		void xuat(){
			cout<<"x="<<x<<"  y="<<y<<"  DT = "<<dientich()<<endl;
		}
};
