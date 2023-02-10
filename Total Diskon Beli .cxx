#include <iostream>
using namespace std;
int main()
{
	int harga, jmlBeli, totBeli, bayar;
	float diskon;
	cout << "Masukkan Harga : "; cin >> harga;
	cout << "Masukkan Jumlah Beli : "; cin >> jmlBeli;
	totBeli = harga*jmlBeli;
	if (totBeli >= 1000000){
	    diskon = totBeli*0.3;
	    bayar = totBeli-diskon;
	    } else if (totBeli >= 500000){
	    diskon = totBeli*0.1;
	    bayar = totBeli-diskon;
	    } else {
	    diskon = 0;
	    bayar = totBeli-diskon;
	    }
	    cout << "Total Beli Kamu = " << totBeli << endl;
	    cout << "Diskon Kamu Sebesar = " << diskon << endl;
	    cout << "Total Bayar Kamu = " << bayar << endl;
}