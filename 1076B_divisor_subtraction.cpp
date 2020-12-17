#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> primes;
void eratostenes(int &&n)
{
    vector<int> numbers(n + 1, 0);
    int i, j;
    for(i = 2; i * i <= n; i++)
    {
        if(numbers[i] == 0)
        {
            primes.push_back(i);
            for(j = i * i; j <= n; j += i)
                numbers[j] = 1;
        }
    }

    for(i; i <= n; i++)
        if(numbers[i] == 0)
            primes.push_back(i);
}

int main()
{
    long long int n;
    cin >> n;

    eratostenes(sqrt(n));
    int d;
    for(d = 0; d < primes.size(); d++)
        if(n % primes[d] == 0)
        {
            cout << ( (n - primes[d]) / 2) + 1;
            break;
        }

    if(d == primes.size())
        cout << 1;


    return 0;
}