#include <iostream>

using namespace std;

int main()
{
    long long int n, k, difference;
    cin >> n >> k;

    if(k >= n * 2)
        cout << 0;
    else if(k <= n)
    {
        if(k % 2 == 0)
            cout << k / 2 -1;
        else
            cout << k / 2;
    }
    else
    {
        difference = k - n;
        difference = n - difference;
        if(difference % 2 == 0)
            cout << difference / 2;
        else 
            cout << difference / 2 + 1;
    }

    return 0;
}