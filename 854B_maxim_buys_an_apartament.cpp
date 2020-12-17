#include <iostream>

using namespace std;

int main()
{
    int n, k, w;
    cin >> n >> k;

    w = n - k;
    if(k == 0 || k == n)
        cout << 0 << " " << 0;
    else if(w <= k * 2)
        cout << 1 << " " << n - k;
    else if (w > k * 2)
        cout << 1 << " " << k * 2;

    return 0;
}