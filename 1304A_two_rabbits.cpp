#include <iostream>

using namespace std;

int main()
{
    int t, x, y, a, b, l, p;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> x >> y >> a >> b;
        l = a + b;
        p = y - x;
        if(p % l == 0)
            cout << p / l << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}