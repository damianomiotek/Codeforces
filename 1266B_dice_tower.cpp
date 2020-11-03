#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int x;

    for(int i = 0; i < t; i++)
    {
        cin >> x;
        if(x < 21 && x > 14)
            cout << "YES" << endl;
        else if(x < 15)
            cout << "NO" << endl;
        else
        {
            x = x % 14;
            if(x <= 6 && x >=1)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }

    return 0;
}