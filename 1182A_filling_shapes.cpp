#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if( n  % 2 == 0)
    {
        n = pow(2, n/2);
        cout << n;
    }
    else
        cout << 0;
    
    return 0;
}