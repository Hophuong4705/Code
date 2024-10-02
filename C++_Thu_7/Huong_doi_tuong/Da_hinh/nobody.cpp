#include <iostream>
#include "Employee.h"
#include "Student.h"
#include "Person.h"
int main() {
	Employee s("a", 19 , 29);
	s.printInfo();
	Student a("ad",19,30);
	a.printInfo();
	return 0;
}
