#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 2;

    bool hasil;

    // operator logika: not, and, or.

    //not
    cout<<"Not"<<endl;
    hasil = !(a==3);
    cout<<hasil<<endl;

    //and
    cout<<"And"<<endl;
    hasil = (a==3) and (b==2);
    cout<<hasil<<endl;
    hasil = (a==3) and (b==3);
    cout<<hasil<<endl;
    hasil = (a==4) && (b==2);
    cout<<hasil<<endl;
    hasil = (a==4) && (b==3);
    cout<<hasil<<endl;

    //or
    cout<<"Or"<<endl;
    hasil = (a==3) or (b==2);
    cout<<hasil<<endl;
    hasil = (a==3) or (b==3);
    cout<<hasil<<endl;
    hasil = (a==4) || (b==2);
    cout<<hasil<<endl;
    hasil = (a==4) || (b==3);
    cout<<hasil<<endl;

    return 0;
}
