#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;

    cout << "Masukkan nilai = ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Angka yang anda masukkan adalah 1" << endl;
        break;
    case 2:
        cout << "Angka yang anda masukkan adalah 2" << endl;

    case 3:
        cout << "Angka yang anda masukkan adalah 3" << endl;

    case 4:
        cout << "Angka yang anda masukkan adalah 4" << endl;

    case 5:
        cout << "Angka yang anda masukkan adalah 5" << endl;
    default:
        cout << "Angka yang anda masukkan bukan angka 1-5" << endl;
    }
    cout << "Akhir dari program" << endl;
    return 0;
}
