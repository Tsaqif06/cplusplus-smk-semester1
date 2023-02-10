#include <iostream>

using namespace std;

int main()
{
	int nilai;
	cout << "Berapa Nilai Kamu? : ";
	cin >> nilai;
	
	if (nilai < 0) {
	cout << "Salah Input" << endl;
 	}  else if (nilai > 100) {
 	   cout << "Salah Input" << endl;
 	}  else if (nilai >=91) {
	   cout << "A" << endl;
	 } else if (nilai >=81) {
	     cout << "B" << endl;
	 } else if (nilai >=71) {
	     cout << "C" << endl;
     } else if (nilai >=61) {
         cout << "D" << endl;
     } else {
         cout << "E" << endl;
     }
}