#include <iostream>
using namespace std;
int main ()
{
    short angka;
    char lagi;
    do {  cout << "Masukkan Angka : "; 
    cin >> angka;
    if (angka <= 0){
        cout << "Salah Input" << endl;
        } else if (angka > 12) {
            cout << "Bulan Masehi Cuma Ada 12 Ya ^_^ " << endl;
        }
     switch (angka) {
     case 1 :
     cout << "Januari" << endl; 
     break;
     case 2 :
     cout << "Februari" << endl;
     break;
     case 3 :
     cout << "Maret" << endl;
     break;
     case 4 :
     cout << "April" << endl;
     break;
    case 5 :
    cout << "Mei" << endl;
    break;
    case 6 :
    cout << "Juni" << endl;
    break;
    case 7 :
    cout << "Juli" << endl;
    break;
    case 8 :
    cout << "Agustus" << endl;
    break;
    case 9 :
    cout << "September" << endl;
    break;
    case 10 :
    cout << "Oktober" << endl;
    break;
    case 11 :
    cout << "November" << endl;
    break;
    case 12 :
    cout << "Desember" << endl;
    }
    cout << "Coba Lagi? (y/t) : ";
    cin >> lagi; } 
    while (lagi == 'y');
}