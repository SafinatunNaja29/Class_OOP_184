#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
 };

class MataKuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "\nMasukan jumlah SKS = ";
		cin >> sks;
		cout << "\nMasukan Kode MK = ";
		cin >> kode;
		cout << "\nMasukan Nama MK = ";
		cin >> namaMK;

	}
};