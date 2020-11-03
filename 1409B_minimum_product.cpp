#include <iostream>

using namespace std;

int main()
{
    long long int t, a, b, x, y, n, product1, product2;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b >> x >> y >> n;
        
        if(a - n < x)
        {
            int second = n - (a - x);
            if(b - second < y)
                product1 = x * y;
            else 
                product1 = x * (b - second);
        }
        else 
            product1 = (a - n) * b;

        
        if(b - n < y)
        {
            int second = n - (b - y);
            if(a - second < x)
                product2 = y * x;
            else 
                product2 = y * (a - second);
        }
        else 
            product2 = (b - n) * a;

        


        if(product1 < product2)
            cout << product1 << endl;
        else 
            cout << product2 << endl;
    }

    return 0;
}