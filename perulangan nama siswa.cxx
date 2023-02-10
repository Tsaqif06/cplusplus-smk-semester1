#include <iostream>
using namespace std;
int main()
{
    string nama;
    int j;
    cout << "Masukkan Nama Kamu : ";
    cin >> nama;
    cout << "Masukkan Angka Ingin Berapa Diulang : ";
    cin >> j;
    for (int i=1; i<=j; i++) {
    cout << nama <<" " <<i << endl; }
}