#include "Manager.h"
Manager manager;
void menu() {
	cout << "\n-------------------\n";
	cout << "1.Hien thong tin xe\n"
		<< "2.Doanh thu va so luong xe cua hang Honda\n"
		<< "3.Xe co gia ban thap nhat\n"
		<< "4.Thoat\n "
		<< "Nhap lua chon: ";
}
void control() {
	int k;
	cin >> k;
	switch (k)
	{
	case 1:
		manager.print();
		break;
	case 2:
		manager.cau3();
		break;
	case 3:
		manager.cau4();
		break;
	case 4:
		exit(0);
	default:
		break;
	}
}
int main() {
	bool run=true;
	manager.read();
	while (run) {
		menu();
		control();
	}
	return 0;
}