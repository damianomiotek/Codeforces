#include <iostream>

using namespace std;

long long int sum_digits(long long int x)
{
    long long int sum = 0;
    while(x)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    long long int n, x;

    cin >> n;

    if(n < 9)
        cout << n;
    else
    {
        x = 0;
        while(x * 10 + 9 <= n)
            x = x * 10 + 9;

        cout << sum_digits(x) + sum_digits(n - x);
    }

    return 0;
}