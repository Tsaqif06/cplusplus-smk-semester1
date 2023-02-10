#include <iostream>
using namespace std;
int main()
{
	string bulan[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
	int angka;
	cout << "Masukkan Angka Untuk Menentukan Bulan : "; 
	cin >> angka;
	angka = angka-1;
	cout << bulan[angka]<< endl;
	
}