#include <bits/stdc++.h>
#define M_PI       3.14159265358979323846

using namespace std;

int main()
{
    double d, h, v, e, growth, time, r;
    cin >> d >> h >> v >> e;
    r = d / 2;

    growth = M_PI * pow(r, 2) * e;
    if(v > growth)
    {
        double starting_content = M_PI * pow(r, 2) * h;
        time = starting_content / (v - growth);
        cout << "YES" << endl;
        cout.precision(4);
        cout << fixed << time;
    }
    else 
        cout << "NO";


    return 0;
}