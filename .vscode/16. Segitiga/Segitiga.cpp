#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int input;
    // cout << "Masukkan tinggi segitiga: " << endl;
    // cin >> input;

    int input = 3;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;

    for (int i = 0; i < input; i++)
    {
        for (int space = input; space > i + 1; space--)
        {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << "\n";

    for (int i = 0; i < input; i++)
    {
        for (int j = input; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = input; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = 0; i < input; i++)
    {
        for (int j = input; j > i + 1; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "\n";

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (input * 2) - (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";
    for (int i = 0; i < input; i++)
    {
        for (int j = input; j > i + 1; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < (i * 2) + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 1; i < input; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < (input * 2) - (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
