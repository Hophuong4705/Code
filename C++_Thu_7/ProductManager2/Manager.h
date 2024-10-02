#include "Moto.h"
#include <vector>
#include <fstream>
class Manager
{
private:
	vector<Moto> motos;
public:
	Manager() {};
	void read() {
		string ma, ten, nhasx;
		int soluong;
		float gia;
		ifstream file("data.txt");
		if (!file.is_open()) exit(-1);

		while (file >> ma >> ten >> soluong >> gia >> nhasx) {
			motos.push_back(Moto(ma, ten, soluong, gia, nhasx));
		}
		file.close();
	}

	void print() {
		cout << "xe co gia be hon 25tr\n";
		cout << "ten\tsoluong\tgia\t\tnhaSX\n";
		for (int i = 0; i < motos.size();i++) {
			if (motos[i].getGia() < 25000000)
				cout << (string)motos[i].getName() << "\t" << motos[i].getSoluong() << "\t" << (int)motos[i].getGia() << "\t" << motos[i].getNhaSX() << "\n";
		}
	}

	void cau3() {
		int sl = 0;float dt = 0;
		for (int i = 0;i < motos.size();i++) {
			if (motos[i].getNhaSX() == "Honda") {
				sl += motos[i].getSoluong();
				dt += motos[i].getSoluong() * motos[i].getGia();
			}
		}
		cout << "Hang xe Honda co so luong xe la: " << sl;
		cout << "\nHang xe Honda co doanh thu la: " << (int)dt;
	}
	void cau4() {
		float min=motos[0].getGia();
		string ten=motos[0].getName();
		for (int i = 1;i < motos.size();i++) {
			if (motos[i].getGia() < min) {
				min = motos[i].getGia();
				ten = motos[i].getName();
			}
		}
		cout << "xe co gia thap nhat la xe " << ten << " voi gia " << (int)min;
	}
	


};