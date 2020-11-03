#include <iostream>

using namespace std;

int main()
{
    int l, r;
    cin >> l >> r;

    if(r - l > 0)
        cout << 2;
    else
    {
        if(r % 2 == 0)
            cout << 2;
        else if(r % 3 == 0)
            cout << 3;
        else if(r % 5 == 0)
            cout << 5;
        else if(r % 7 == 0)
            cout << 7;
        else
            cout << l;
    }
    
    return 0;
}