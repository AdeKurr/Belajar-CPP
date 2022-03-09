#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator \n \n";

    // Memasukkan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih operator +,-,*,/: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    if (aritmatika == '+')
    {
        hasil = a + b;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
    }
    cout<<hasil<<endl;
    return 0;
}
