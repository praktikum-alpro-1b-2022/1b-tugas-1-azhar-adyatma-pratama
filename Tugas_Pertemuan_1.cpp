#include <iostream>
using namespace std;

int main ()
{
    cout << "NO 1" << endl;
    cout << "IDENTITAS DIRI" << endl;

    cout << "NPM          : 2210631170011" << endl;
    cout << "Nama Lengkap : Azhar Adyatma Pratama" << endl;
    cout << "Umur         : 18 Tahun" << endl;
    cout << "Kelas        : 1B Informatika" << endl;
    cout << "Hobi         : Nonton bola dan fotografi" << endl;
    cout << "Cita-cita    : Menjadi programmer dan fotografer profesional" << endl;
    cout << endl;

    int a, b, temp;
    cout << "NO 2" << endl;
    cout << "VARIABEL SEMENTARA" << endl;

    cout << "Sebelum ditukar :\nA = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nSetelah ditukar :\nA= "<<a<< "\nB= " <<b<< endl;
    cout << endl;

    int x, y;
    cout << "TANPA MENGGUNAKAN VARIABEL SEMENTARA" << endl;

    cout << "Sebelum ditukar :\nX = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;

    x = x + y;
    y = x - y;
    x = x - y;

    cout << "\nSetelah ditukar :\nX= "<<x<< "\nY= " <<y<< endl;

   return 0;
}
