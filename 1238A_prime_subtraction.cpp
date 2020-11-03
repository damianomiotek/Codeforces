#include <iostream>

using namespace std;

int main()
{
    int t;
    long long int x, y;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if(x - y > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}