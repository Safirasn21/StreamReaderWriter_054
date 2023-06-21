#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namafile;

	cout << "Masukan nama file : ";
	cin >> namafile;

	//membuka file dalam menulis
	ofstream outfile;
	//menujuk kesebuah nama file
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;
	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari baris kedalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;

	//menunjuk ke sebuah file
	infile.open(namafile, ios::in);

	cout << endl << ">= Membyuka dan membaca nama file " << endl;

}