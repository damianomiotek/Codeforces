#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = 1;

    while(m - i > 0)
    {
        m -= i;
        i++;
        if(i > n)
            i = 1;
    }

    if(m == i)
        cout << 0;
    else 
        cout << m;

    return 0;
}