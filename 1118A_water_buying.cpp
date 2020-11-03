#include <iostream>

using namespace std;

int main()
{
    int t;
    long long int n, a, b;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;
        if(2 * a < b)
            cout << n * a << endl;
        else
            cout << n / 2 * b + (n % 2 * a) << endl;
    }

    return 0;
}
