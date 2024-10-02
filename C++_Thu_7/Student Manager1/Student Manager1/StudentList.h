#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <fstream>
#include <vector>
#include "Student.h"
class StudentList{
  private:
    	vector<Student> s;
  public:
  		void loadStudentfromFile(){
	  		ifstream f; 	f.open("data1.txt");
	        string id, name, course; float grade;
	        while (!f.eof()){ 
	            f >> id >> name >> course >> grade; 
				Student t = Student(id,name,course,grade);  
				s.push_back(t);  			
	        }
	        f.close();
			s.resize(s.size()-1);		        
		}
		
		void saveStudenttoFile(string course){
	  		ofstream f; 	f.open("data2.txt");
	  		f<<"Danh sach sinh vien lop: "<<course<<endl;
	        for (int i=0; i<s.size();i++)
	          if (s[i].getCourse()==course)
	            f<<s[i].getId()<<" "<<s[i].getName()<<" "<<s[i].getGrade()<<endl;  			
	        f.close();		        
		}
				
		void addStudent(){
			Student t;
			t.inputStudent();
			s.push_back(t);
		}
		
		void printStudentList(){	
			for (int i=0; i<s.size(); i++)	
				s[i].printStudent();
			
		}
		
		void searchStudent(){
			string myname; int i;
			cout<<"Input a name: ";   cin>>myname;	cin.ignore();	
			for (i=0; i<s.size();i++)
			 	if(s[i].getName()==myname){
			 		s[i].printStudent();  break;
			 	}
			if (i>s.size()) cout<<"Not found this student!"<<endl;
		}
		
		void deleteStudent(){
			string id; int i;
			cout<<"Input an ID: ";   cin>>id;	cin.ignore();
			for (i=0; i<s.size();i++)
			 	if(s[i].getId()==id){
			 		s.erase(s.begin()+i);  
					cout<<"Deleted this Student!"<<endl;
					break;
			 	}	
			if (i>s.size()) cout<<"Not found this student!"<<endl;		
		}
		
		void outputStudentInCourse(){
			string course;
			cout<<"Input a course: ";   cin>>course;	cin.ignore();	
			for (int i=0; i<s.size();i++)
			 	if(s[i].getCourse()==course)
			 		s[i].printStudent();  
			saveStudenttoFile(course);			 		
		}		
				
		void clearList(){
			 s.clear();
		}
};
#endif
