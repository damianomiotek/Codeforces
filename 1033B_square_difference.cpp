#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    long long int a, b, sum;
    cin >> t;
    bool is_prime;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a - b == 1)
        {
            sum = a + b;
            is_prime = true;
            for(int j = 2; j <= sqrt(sum); j++)
                if(sum % j == 0)
                {
                    is_prime = false;
                    break;
                }
            
            if(is_prime)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        else 
            cout << "NO" << endl;
    }

    return 0;
}