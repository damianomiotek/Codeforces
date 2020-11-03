#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(m > n/2)
        cout << n - m;
    else if(m > 1)
        cout << m;
    else if(m <= 1)
        cout << 1;

    return 0;
}