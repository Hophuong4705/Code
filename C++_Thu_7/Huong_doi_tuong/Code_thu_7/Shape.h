#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;
 
class Shape {
private:
   string color;   // Private data member
 
public:
   Shape(const string & color) {
   this->color = color;
}
 
// Getter
string getColor() const {
   return color;
}
 
// Setter
void setColor(const string & color) {
   this->color = color;
}
 
void print() const {
   cout << "Shape of color=" << color;
}
};
 
#endif
