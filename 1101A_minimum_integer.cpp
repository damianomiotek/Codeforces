#include<iostream>

using namespace std;

int main()
{
    int q, l, r, d, x, count;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> l >> r >> d;
        if( d >= l && d <= r)
        {
            count = r / d + 1;
            x = d * count;
            cout << x << endl;
        }
        else 
            cout << d << endl;
    }

    return 0;
}