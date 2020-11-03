#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b)
        cout << "YES";
    else if(c == 0)
        cout << "NO";
    else if( (b - a) % c == 0)
        if( (b - a) / c > 0)
            cout << "YES";
        else 
            cout << "NO";
    else
        cout << "NO";
    

    return 0;
}