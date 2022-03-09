#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 2;

    bool hasil;

    // operator logika: not, and, or.

    //not
    hasil = !(a==3);

    //and
    hasil = (a==3) and (b==2);
    cout<<hasil<<endl;
    hasil = (a==3) and (b==3);
    cout<<hasil<<endl;
    hasil = (a==4) and (b==2);
    cout<<hasil<<endl;
    hasil = (a==4) and (b==3);
    cout<<hasil<<endl;
    return 0;
}
