#include <iostream>
#include "Rectangle.h"
main(){ 
  Rectangle a(4);		cout<<"a: "; 	a.xuat();
  Rectangle b(4,3);		cout<<"b: ";	b.xuat(); 
  
  a.setX(5);   a.setY(3);
  cout<<"a sau khi setXY: ";
  cout<<"x="<<a.getX()<<"  y="<<a.getY()<<endl;
 
  Rectangle *p;
  p=&a;			cout<<"p: ";	p->xuat();
  
  Rectangle *q=new Rectangle(6,5);
  cout<<"q: ";		q->xuat();  
}




  
  

