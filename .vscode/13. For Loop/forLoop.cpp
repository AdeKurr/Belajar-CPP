#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Loop 1" << endl;
    for (int counter = 1; counter < 10; counter++)
    {
        cout << counter << endl;
    }
    cout << " " << endl;
    cout << "Loop 2" << endl;
    for (int counter = 1; counter < 10; counter += 2)
    {
        cout << counter << endl;
    }
    cout << " " << endl;
    cout << "Loop 3" << endl;
    for (int counter = 1; counter > -10; counter--)
    {
        cout << counter << endl;
    }

    cout << " " << endl;
    cout << "Loop 4" << endl;
    int total = 0;
    for (int counter = 1; counter < 10; counter++)
    {   
        total += counter;
        cout << counter << "||" << total << endl;
    }

    cout << "Akhir dari program";
    return 0;
}
