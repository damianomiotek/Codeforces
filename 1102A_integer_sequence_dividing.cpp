#include <iostream>

using namespace std;

int main()
{
    long long int n;
    long long int sum;
    cin >> n;

    sum = n * (n + 1) / 2;
    if(sum % 2)
        cout << 1;
    else
        cout << 0;

    return 0;
}