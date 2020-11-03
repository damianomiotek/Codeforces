#include <iostream>

using namespace std;

int main()
{
    int n, a, b, d;
    cin >> n >> a >> b;
    if(b >= 0)
    {
        d = (a + b) % n;
        if(d == 0)
            cout << n;
        else 
            cout << d;
    }
    else
    {
        d = (a + b) % n;
        if(d < 0)
        {
            d *= -1;
            cout << n - d;
        }
        else if(d == 0)
            cout << n;
        else 
            cout << d;
    }
    
    return 0;
}