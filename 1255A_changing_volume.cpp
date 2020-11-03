#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, a, b, subtraction, rest, division;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        subtraction = abs(a - b);
        if(subtraction == 0)
            cout << 0 << endl;
        else if(subtraction < 3)
            cout << 1 << endl;
        else if(subtraction < 5)
            cout << 2 << endl;
        else
        {
            division = subtraction / 5;
            rest = subtraction % 5;
            if(rest == 0)
                cout << division << endl;
            else if(rest < 3)
                cout << division + 1 << endl;
            else if(rest < 5)
                cout << division + 2 << endl;
        }
    }

    return 0;
}