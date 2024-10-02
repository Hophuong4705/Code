#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;
 
int main() {
  Circle s(5, "Blue");
  s.print();
  cout << s.getArea();
  cout <<endl;
  Rectangle t(5,6,"Black");
   cout<<endl;
  t.print();
  cout << t.getArea();
  cout<<endl;
  return 0;
}

