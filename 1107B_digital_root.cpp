#include <iostream>

using namespace std;

int main()
{
    int n, x;
    long long k;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> k >> x;
        cout << 9 * (k -1) + x << endl;
    }

    return 0;
}