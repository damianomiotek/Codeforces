#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x;
    double y;
    cin >> n >> x >> y;
    y *= 0.01;
    y = ceil(y * n);
    if(x < y)
        cout << y - x;
    else 
        cout << 0;
    return 0;
}