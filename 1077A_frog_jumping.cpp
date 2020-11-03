#include <iostream>

using namespace std;

int main()
{
    int t;
    long long int a, b, k, right, left;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b >> k;
        if(k % 2)
        {
            right = (k / 2 + 1) * a;
            left = k / 2 * b;
            cout << right - left << endl;
        }
        else
        {
            right = k / 2 * a;
            left = k / 2 * b;
            cout << right - left << endl;
        }
    }
    return 0;
}