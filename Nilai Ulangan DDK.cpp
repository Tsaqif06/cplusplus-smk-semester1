#include <iostream>
using namespace std;
int main()
{
	string nama[35] = {"Royhan", "Tsaqif", "Akmal", "Ananda", "Callista", "Fido", "Bagas", "Benita", "Chika", "Eky", "Fajri", "Ferlina", "Ghina", "Cindy", "Agung", "Jonathan", "Labib", "Fawwaz", "Sando", "Mella", "Fatra", "Fauzi", "Mateo", "Naila", "Naufal", "Pieter", "Rama", "Rifqi", "Septian", "Sheva", "Sultan", "Tegar", "Aca", "Zacky", "Zidane"};
	int nilai[35] = {100, 95, 90, 95, 0, 0, 100, 95, 90, 90, 85, 0, 0, 0, 80, 0, 0, 0, 0, 90, 95, 95, 0, 0, 80, 100, 85, 0, 0, 85, 90, 0, 85, 0, 85};
	
	for (int i=0; i<35; i++) {
	    cout << "Nilai Ulangan Dari " << nama[i] << " "<< "Dari Kelas X RPL C Adalah " << nilai[i] << endl;
	    }
}