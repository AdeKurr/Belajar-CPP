#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    a = 10;
    cout << "Nilai a: " << a << endl;

    int b;
    cout << "Masukkan angka: ";
    cin >> b;
    cout << "Angka anda adalah: " << b << endl;

    int c;
    c = a + b;
    cout << a << " + " << b << " = " << c << endl;

    return 0;
}
