#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, i, result;
    cin >> a >> b >> c >> d;
    for(i = 0; i < 100000; i++)
    {
        result = a * i + b;
        if( result - d > -1 && (result - d) % c == 0 )
        {
            cout << result;
            break;
        }
    }
    if(i == 100000)
        cout << -1;

    return 0;
}