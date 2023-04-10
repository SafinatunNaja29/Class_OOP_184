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

	void tampilMK() {
		cout << "\nJumlah SKS = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMK << endl;

	}
};

int main() {
	Mahasiswa mhs;
	MataKuliah MK;

	cout << "Masukan NIM = ";
	cin >> mhs.nim;
	cout << "Masukan nama = ";
	cin >> mhs.nama;
	mhs.tampil();
	MK.inputMK();
	MK.tampilMK();
}