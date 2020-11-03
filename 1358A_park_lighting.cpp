#include <iostream>

using namespace std;

int main()
{
    int t, n, m;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> m;
        if( (n * m) % 2)
            cout << (n * m) / 2 + 1 << endl;
        else
            cout << (n * m) / 2 << endl;
    }

    return 0;
}