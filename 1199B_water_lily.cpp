#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, l;
    double x;
    cin >> h >> l;
    x = (pow(l, 2) - pow(h, 2)) / (2 * h);

    cout.precision(7);
    cout << fixed << x;

    return 0;
}