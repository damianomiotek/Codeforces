#include <iostream>

using namespace std;

int sumBase(int number, int & base)
{
    int sum = 0;
    while(number)
    {
        sum += number % base;
        number /= base;
    }

    return sum;
}

int main()
{
    int a, y;
    long long int x = 0;
    cin >> a;
    y = a - 2;
    for(int i = 2; i < a; i++)
        x += sumBase(a, i);

    int numerator = x, denominator = y;
    if(x % y == 0)
    {
        numerator /= y;
        denominator = 1; 
    }
    else
    {
        for(int i = 2; i <= y/2; i++)
        {
            if( (x % i == 0) && (y % i == 0) )
            {
                numerator = x / i;
                denominator = y / i;
            }
        }
    }
    
    
    cout << numerator << "/" << denominator;

    return 0;
}