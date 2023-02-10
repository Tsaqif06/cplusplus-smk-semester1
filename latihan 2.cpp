/* Nama : Ahmad Tsaqif Al Arifin
    Kelas : X RPL C
    Program : Latihan 2
    Dibuat Pada : Sabtu, 10 September 2022
*/
#include <iostream>
using namespace std;
void tambah (int t1, int t2);
void kurang (int k1, int k2);
void kali (int ka1, int ka2);
void bagi (int b1, int b2);
void garis ();

void tambah (int t1, int t2)
{
    int t3;
    t3 = t1+t2;
    garis();
    cout << "HASIL DARI " << t1 << " + " << t2 << " = " << t3 << endl;
    garis();
}

void kurang (int k1, int k2)
{
    int k3;
    k3 = k1-k2;
    garis();
    cout << "HASIL DARI " << k1 << " - " << k2 << " = " << k3 << endl;
    garis();
}

void kali (int ka1, int ka2)
{
    int ka3;
    ka3 = ka1*ka2;
    garis();
    cout << "HASIL DARI " << ka1 << " x " << ka2 << " = " << ka3 << endl;
    garis();
}

void bagi (int b1, int b2)
{
    int b3;
    b3 = b1/b2;
    garis();
    cout << "HASIL DARI " << b1 << " : " << b2 << " = " << b3 << endl;
    garis();
}

void garis()
 {
    for (int i = 1; i<38; i++)
    cout << "=";
    cout << endl;
 }

int main ()
{
	short angka;
	char lagi;
	int tmbh1, tmbh2, krng1, krng2, kali1, kali2, bagi1, bagi2;
do {
	garis();
	cout << "\tMENU UTAMA" << endl;
	garis();
	cout << "1. OPERASI PENJUMLAHAN" << endl;
	cout << "2. OPERASI PENGURANGAN" << endl;
    cout << "3. OPERASI PERKALIAN" << endl;
	cout << "4. OPERASI PEMBAGIAN" << endl;
	cout << "5. KELUAR" << endl;
	garis();
	cout << "MASUKKAN KODE [1,2,3,4,5] : ";
	cin >> angka;

     switch (angka) {
         case 1 :
         system ("cls");
         garis();
         cout << "\tOPERASI PENJUMLAHAN" << endl;
         garis();
         cout << "MASUKKAN ANGKA    : ";
         cin >> tmbh1;
         cout << "MASUKKAN PENAMBAH : ";
         cin >> tmbh2;
         tambah(tmbh1,tmbh2);
         break;
         case 2 :
         system ("cls");
         garis();
         cout << "\tOPERASI PENGURANGAN" << endl;
         garis();
         cout << "MASUKKAN ANGKA     : ";
         cin >> krng1;
         cout << "MASUKKAN PENGURANG : ";
         cin >> krng2;
         kurang(krng1,krng2);
         break;
         case 3 :
         system ("cls");
         garis();
         cout << "\tOPERASI PERKALIAN" << endl;
         garis();
         cout << "MASUKKAN ANGKA    : ";
         cin >> kali1;
         cout << "MASUKKAN PENGKALI : ";
         cin >> kali2;
         kali(kali1,kali2);
         break;
         case 4 :
         system ("cls");
         garis();
         cout << "\tOPERASI PEMBAGIAN" << endl;
         garis();
         cout << "MASUKKAN ANGKA   : ";
         cin >> bagi1;
         cout << "MASUKKAN PEMBAGI : ";
         cin >> bagi2;
         bagi(bagi1,bagi2);
         break;
         case 5 :
         system ("cls");
         goto akhir;
     }
        if (angka > 5){
            garis();
            cout << "MASUKKAN ANGKA 1-5 SAJA!" << endl;
            garis();
        }
        cout << "LAGI? (Y/T) : ";
        cin >> lagi;
        system ("cls");} while (lagi == 'y' || lagi == 'Y');

        akhir :
                 garis ();
                 cout << "\tTERIMA KASIH!" << endl;
                 garis ();
}
