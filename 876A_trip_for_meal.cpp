#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if(a < c || b < c)
        cout << min(a, b) * (n - 1);
    else if(n < 2)
        cout << 0;
    else 
        cout << c * (n - 2) + min(a, b);

    return 0;
}