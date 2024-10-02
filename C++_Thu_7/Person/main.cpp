#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int option() {
    int opt;
    cout << "\n-----Menu-----\n";
    cout << "1. Nhap thong tin sinh vien \n";
    cout << "2. Hien thi thong tin \n";
    cout << "3. Tim 1 sinh vien theo ten \n";
    cout << "4. Them 1 sinh vien \n";
    cout << "5. Xoa 1 sinh vien khoi danh sach \n";
    cout << "0. Exit \n";
    cout << "Your option (0-5): ";
    cin >> opt;
    return opt;
}

int main() {
    int n = 0;
    Student* t = NULL;
    
    
    while (true) {
        int opt = option();
        if (opt == 0) break;
        switch (opt) {
            case 1:
                cout << "NHAP SO LUONG SINH VIEN : ";
                cin >> n;
                t = new Student[n];
                for (int i = 0; i < n; i++) {
                    t[i].Nhap();
                    cout << endl;
                }
                break;
            case 2:
                {
                    ofstream outputFile("DATA.txt");
                    if (outputFile.is_open()) {
                        outputFile << "Xuat Thong Tin :" << endl;
                        outputFile << "Thong Tin Sinh Vien" << endl;
                        for (int i = 0; i < n; i++) {
                            t[i].prints(outputFile);
                        }
                        outputFile.close();
                        cout << "Du lieu da duoc ghi vao tep DATA.txt." << endl;
                    } else {
                        cerr << "Khong the mo tep DATA.txt de ghi du lieu." << endl;
                    }
                }
                break;
            case 3:
                {
                    ofstream outputFile("DATA.txt");
                    if (outputFile.is_open()) {
                        string nameToSearch;
                        cout << "Nhap ten sinh vien can tim: ";
                        cin.ignore();
                        getline(cin, nameToSearch);
                        for (int i = 0; i < n; i++) {
                           t[i].Seeking(outputFile, nameToSearch);
                        }
                        outputFile.close();
                        cout << "Kiem Tra DATA.TXT" << endl;
                    } else {
                        cerr << "Khong the mo tep DATA.txt de ghi du lieu." << endl;
                    }
                }
                break;
            case 4:
                {
                    ofstream outputFile("DATA.txt"); 
                    if (outputFile.is_open()) {
                         
                           
                          for (int i=0 ; i<n+1;i++){
                          		t[i].prints(outputFile);
                          		if (t[n].getID() == 0) { 
                          		
                                t[n].Add(outputFile); 
    
                            }
							}
                        outputFile.close();
                        cout << "Du lieu da duoc thay doi !" << endl;
                    } else {
                        cerr << "Khong the mo tep DATA.txt de ghi du lieu." << endl;
                    }
                }
                break;
            case 5:
                {
                    ofstream outputFile("DATA.txt");
                    if (outputFile.is_open()) {
                        long long x;
                        cout << "Nhap ma sinh vien can xoa: ";
                        cin >> x;
                        for (int i = 0; i < n; i++) {
                            t[i].Delete(outputFile,x);
                        }
                        outputFile.close();
                        cout << "Du lieu da duoc thay doi" << endl;
                    } else {
                        cerr << "Khong the mo tep DATA.txt de ghi du lieu." << endl;
                    }
                }
                break;
            default:
                cout << "Invalid option." << endl;
                break;
        }
    }

    delete[] t;

    return 0;
}


