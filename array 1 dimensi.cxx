#include <iostream>
using namespace std;
int main()
{
    int a, input;
    int nilai[100];
    cout << "Masukkan jumlah yang diinputkan : ";
    cin >> input;
    cout << "========================" << endl;
    
    for (a=0; a<input; a++){
        cout << "Masukkan nilai ke " << a + 1 << ": ";
        cin >> nilai[a];
        }
        cout << "\n \nCetak hasil nilai yang telah diinputkan" << endl;
           cout << "========================" << endl;
    for (a=0; a<input; a++){
        cout << "Nilai ke " << a + 1 << " adalah " << nilai [a] << endl;
        }
    return 0;
    }