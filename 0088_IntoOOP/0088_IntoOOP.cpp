#include <iostream>
using namespace std;

class bangunDatar {

	// akses modifer
private:
	float panjang, Lebar;
public:
	float Luas;
	
	void input() {

		cout << "Masukan Panjangnya =";
		cin >> panjang;
		cout << "Masukan Lebarnya =";
		cin >> Lebar;
	}
	float hitungLuas() {
		return panjang * Lebar;
	}

	void display() {

	}
};
