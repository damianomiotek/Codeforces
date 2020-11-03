#include <iostream>

using namespace std;

int main()
{
    int t, x, y, n, k, subtraction;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;
        if(n % x == y)
            cout << n << endl;
        else if(n % x > y)
            cout << n - (n % x - y) << endl;
        else if(n % x < y)
            cout << n - (n % x) - (x - y) << endl;
    }

    return 0;
}