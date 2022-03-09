#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;

    cout<< "Masukkan angka:";
    cin >> a;

    //if statement
    //kondisi dalam bentuk boolean
    if(a == 3)
    {
        cout<<"a adalah 3"<< endl;
    } else{
        cout<<"a bukan 3"<< endl;
    }


    cout<< "selesai" <<endl;
    return 0;
}
