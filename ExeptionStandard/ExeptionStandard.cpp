#include <iostream>
#include <exception>
//untuk object exception yang akan digunakan
#include <array>
//untuk object array yang akan kita gyunakan
using namespace std;

int main() {
	cout << "Awal program" << endl; //penanda 1:....
	try {
		array<int, 3> data = { 3, 5, 7 };
		//pesan array integer 3 elemen
		cout << data.at(5) << endl;
		//memanggil array elemen ke 5
	}

}
