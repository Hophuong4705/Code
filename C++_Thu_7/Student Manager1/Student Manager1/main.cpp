#include"studentList.h"
int option();
int main(int argc, char** argv) {
	StudentList s;	 	
    while (true){    
		int opt=option();
		if  (opt==0) break;  
        switch(opt){
            case 1: s.loadStudentfromFile(); 
					cout<<"Load Student from file - Done...!"<<endl;
					break;
			case 2: s.printStudentList();   	break;
			case 3: s.searchStudent();   		break;
            case 4: s.addStudent();   			break;
            case 5: s.deleteStudent();			break;
            case 6: s.outputStudentInCourse();	break;            
            default:  break;
        };        
    } 
    s.clearList();
	return 0;
}
//------------------------------------------------
int option(){
	cout << "\n ======== MENU ======== " <<endl;
    cout<<"1. Read all students from file"<<endl;
    cout<<"2. Print all students"<<endl;
    cout<<"3. Search a student"<<endl; 
    cout<<"4. Add a student"<<endl;
    cout<<"5. Delete a student"<<endl; 
    cout<<"6. Print students in a course & save file"<<endl; 
    cout<<"0. Exit"<<endl;
    cout <<"your option (0-6): ";
    int opt;    cin>>opt;    cin.ignore();
    return opt;
}
//================================




