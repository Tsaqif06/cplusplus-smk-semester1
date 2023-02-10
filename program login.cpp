#include <iostream>
using namespace std;
int main ()
{
    char admin;
    string username, password;
    cout << " Selamat Datang \n";
    cout << " Apakah Kamu Admin (y/t) : ";
    cin >> admin;
     if (admin == 't') {
        cout << "Ini Bukan Tempat Kamu" << endl;
        } else if (admin == 'y') {
            cout << "Masukkan Username Password Jika Kamu Benar Admin!" << endl ;
            cout << "Username : ";
            cin >> username;
            cout <<"Password : ";
            cin >> password;
        }
     if (username == "qwertyui"){
         if (password == "123"){
                cout << "Selamat Anda Berhasil Login!" << endl ;
         }     else if (password != "123") {
                    cout << "Password Salah!" << endl;
          }
        } else if (username != "qwertyui") {
                if (password == "123"){
                    cout << "Username Tidak Terdaftar" << endl ;
               } else if ( password != "123") {
                    cout << "Username Dan Password Salah!" << endl ;
               }
        }
}
