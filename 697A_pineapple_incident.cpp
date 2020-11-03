#include <iostream>

using namespace std;

int main()
{
    int t, s, x;
    cin >> t >> s >> x;

    if(x >= t + s)
    {
        if( (x - t) % s == 0)
            cout << "YES";
        else if( (x - t - 1) % s == 0)
            cout << "YES";
        else 
            cout << "NO";
    }
    else if(x == t)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}