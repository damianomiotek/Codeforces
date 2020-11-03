#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, s, d, y, bus;
    int min = INT_MAX;
    cin >> n >> t;
    for(int i = 1; i <= n; i++)
    {
        cin >> s >> d;
        if(s >= t)
        {
            if(s < min)
            {
                min = s;
                bus = i;
            }
        }
        else
        {
            if( (t - s) % d == 0)
                y = (t - s) / d;
            else
            {
                y = (t - s) / d;
                y++;
            }

            d = s + (d * y);
            if(d < min)
            {
                min = d;
                bus = i;
            }
        }
    }
    cout << bus;

    return 0;
}