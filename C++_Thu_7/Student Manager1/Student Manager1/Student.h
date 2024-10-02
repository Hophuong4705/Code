#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
		string id, name, course;
		float grade;
	public:
		Student(){}
		Student(string id,string name,string course,float grade){
			this->id = id;			this->name = name;
			this->course = course;	this->grade = grade;
		}
		string getId()		{	return id;		}
		string getName()	{	return name;	}		
		string getCourse()	{	return course;	}		
		float getGrade()	{	return grade;	}
		
		void inputStudent(){
			cout<<"input ID:    ";  cin>>id;	cin.ignore();
			cout<<"input Name:  ";  cin>>name;	cin.ignore();
			cout<<"input Course:";  cin>>course;cin.ignore();			
			cout<<"input Grade:  ";	cin>>grade;
		}	
		void printStudent(){
			cout<<id<<"\t"<<name<<"\t"<<course<<"\t"<<grade<<endl;			
		} 
}; 
#endif
