#include <iostream>
using namespace std;

int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

int tambah(int x, int y)
{
    int z = x + y;
    return z;
}

int main(int argc, char const *argv[])
{
    int input;
    cout << "Masukkan input yang mau dikuadratkan" << endl;
    cin >> input;
    int hasil = kuadrat(input);
    cout << hasil << endl;

    int input1, input2;
    cout << "masukkan nilai a:" << endl;
    cin >> input1;
    cout << "masukkan nilai b:" << endl;
    cin >> input2;

    int hasil2 = tambah(input1, input2);
    cout << input1 << "+" << input2 << "=" << hasil2 << endl;
    return 0;
}
