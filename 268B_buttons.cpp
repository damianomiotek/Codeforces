#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int result = 0;
    cin >> n;
    int i = 1;
    while(n)
    {
        result += (n - 1) * i + 1;
        n--;
        i++;
    }

    cout << result;

    return 0;
}