#include <iostream>

using namespace std;

int main()
{
    int t, a, b, modulo1, modulo2;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a == b)
            cout << 0 << endl;
        else if(a > b)
        {
            modulo1 = a % 2;
            modulo2 = b % 2;
            if(modulo1 != modulo2)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
        else if(a < b)
        {
            modulo1 = a % 2;
            modulo2 = b % 2;
            if(modulo1 != modulo2)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}