#ifndef RECTANGLE_H
#define RECTANGLE_H
 
#include "Shape.h"
 
// The class Rectangle is a subclass of Shape
class Rectangle : public Shape {
private:
   int length;
   int width;
 
public:
Rectangle(int length, int width, const string & color)
  : Shape(color), length(length), width(width) { }
 
// Getters
int getLength() const {
   return length;
}
int getWidth() const {
   return width;
}
 
// Setters
void setLength(int length) {
   this->length = length;
}
void setWidth(int width) {
   this->width = width;
}
 
void print() const {
   std::cout << "Rectangle length=" << length << " width=" << width << ", subclass of ";
   Shape::print();
}
 
// Implement virtual function inherited from superclass Shape
double getArea() const {
   return length * width;
}
};
 
#endif
