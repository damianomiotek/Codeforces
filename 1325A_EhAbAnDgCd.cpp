#include <iostream>

using namespace std;

int main()
{
    int t, x;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> x;
        if(x % 2 == 0)
            cout << x / 2 << " " << x / 2 << endl;
        else
        {
            cout << 1 << " " << x - 1 << endl;
        }
        
    }

    return 0;
}