#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    n--;
    for (long long int i = 1; i <= n; i++) {
        n -= i;
    }

    cout << n + 1 << endl;

    return 0;
}