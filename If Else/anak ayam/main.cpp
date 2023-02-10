#include <iostream>

using namespace std;

int main()
{
    short anakayam;
    cout << "Masukkan Jumlah Anak Ayam : ";
    cin >> anakayam;
    while (anakayam > 1){
        cout << "Anak Ayam Ada " << anakayam << endl;
        anakayam = anakayam - 1;
        cout << "Anak Ayam Ada " << anakayam << endl;
}
    cout << "Tinggal Induknya" << endl;
 }
