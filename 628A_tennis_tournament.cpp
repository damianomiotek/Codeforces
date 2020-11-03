#include <iostream>

using namespace std;

int main()
{
    int n, b, p, x, y, match;
    cin >> n >> b >> p;
    y = n * p;
    x = match = 0;

    while(n > 1)
    {    
        if(n % 2 == 0)
        {
            x += n * b + (n / 2);
            n = n / 2;
        }
        else
        {
            x += (n - 1) * b + ( (n - 1) / 2);
            n = (n - 1) / 2 + 1;
        }
    }

    cout << x << " " << y;

    return 0;
}