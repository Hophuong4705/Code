#ifndef CIRCLE_H

#define PI 3.14159265
#include "Shape.h"
 
// The class Circle is a subclass of Shape
class Circle : public Shape {
private:
   int radius;   // Private data member
 
public:
   // Constructor
Circle(int radius, const string & color)
   : Shape(color), radius(radius) { }
 
// Getters
int getRadius() const {
   return radius;
}
 
// Setters
void setRadius(int radius) {
   this->radius = radius;
}
 
void print() const {
   std::cout << "Circle radius=" << radius << ", subclass of ";
   Shape::print();
}
 
// Implement virtual function inherited for superclass Shape
double getArea() const {
   return radius * radius * PI;
}
};
 
#endif
