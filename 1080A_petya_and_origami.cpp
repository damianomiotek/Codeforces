#include <iostream>

using namespace std;

int main()
{
    int n, k, red, green, blue;
    cin >> n >> k;
    red = n * 2 / k;
    if(n * 2 % k)
        red++;
    green = n * 5 / k;
    if(n * 5 % k)
        green++;
    blue = n * 8 / k;
    if(n * 8 % k)
        blue++;

    cout << red + green + blue;

    return 0;
}