#include "Producth.h"
class Moto :public Product {
private:
	float gia;
	string nhasx;
public:
	Moto(string ma, string ten, int soluong, float gia, string nhasx) :Product(ma, ten, soluong) {
		this->gia = gia;
		this->nhasx = nhasx;
	}
	float getGia() { return gia; }
	string getNhaSX() { return nhasx; }
};
