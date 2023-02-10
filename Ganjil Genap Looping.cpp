#include <iostream>
using namespace std;
int main()
{
	int angka, hasil;
	char lagi;
do { cout << "Masukkan Angka : ";
	cin >> angka;
	hasil = angka % 2;
	if (hasil >=1) {
	    cout << "Angka Ini Merupakan Angka Ganjil" << endl;
	    } else if (hasil == 0){
	    cout << "Angka Ini Merupakan Angka Genap" << endl;  
	    }
	    cout<<"Lagi? (y/t) : ";
	    cin>>lagi;}  while (lagi=='y');
	   if (lagi == 't')
	   cout << "Program Selesai" << endl;
}