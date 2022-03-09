#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int f_n = 0;
    int f_n1 = 1;
    int f_n2 = 0;
    int limit = 6;
    f_n = f_n1 + f_n2;
    cout << f_n << endl;

    for (int i = 1; i < limit; i++)
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << endl;
    }
    return 0;
}
