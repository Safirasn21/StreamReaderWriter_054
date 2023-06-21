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

}