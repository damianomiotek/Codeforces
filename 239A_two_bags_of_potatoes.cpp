#include <iostream>

using namespace std;

int main()
{
    int y, k, n, x, pom;
    cin >> y >> k >> n;
    x = 1;

    if(n - y >= 10000000 && k > y)
        x = k - y;
    else if( n - y >= 10000000 && k == y)
        x = k;
    else if(n - y >= 10000000 &&  y >= 1000000 && k >= 10000)
    {
        pom = 2;
        while(k * pom <= y)
            pom++;
        x = k * pom - y;
    }

    while( (y + x) % k && y + x <= n)
        x++;

    if(y + x > n)
        cout << -1;
    else
    {
        while(y + x <= n)
        {
            cout << x << " ";
            x += k;
        }
    }

    return 0;
}