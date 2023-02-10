#include <iostream>

using namespace std;

int main()
{
    short anakayam, sisa;
    cout << "Masukkan Jumlah Anak Ayam : ";
    cin >> anakayam;
    do {
        sisa = anakayam - 1;
        cout << "Anak Ayam Ada "<< sisa << endl;
    } while (sisa >0);
}
