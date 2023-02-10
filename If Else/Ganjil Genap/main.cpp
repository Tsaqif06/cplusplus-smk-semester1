#include <iostream>

using namespace std;

int main()
{
    int angka, hasil;
    char lagi;

    do { cout << "Masukkan angka : ";
    cin >> angka;
    hasil = angka%2;
    if (hasil==0) {
        cout << "Angka ini adalah angka genap" << endl;
    } else {
        cout << "Angka ini adalah angka ganjil" << endl;
    }
    cout << "Coba lagi? (y/t) : ";
    cin >>lagi;
    } while (lagi=='y');
}
