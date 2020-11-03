#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1 || n == 2)
    {
        cout << 1 << endl;
        cout << 1;
    }
    else if(n == 3)
    {
        cout << 2 << endl;
        cout << "1 3";
    }
    else if(n == 4)
    {
        cout << 4 << endl;
        cout << "2 4 1 3";
    }
    else
    {
        int i = 1;
        cout << n << endl;
        while(i <= n)
        {
            cout << i << " ";
            i += 2;
        }
        i = 2;
        while(i <= n)
        {
            cout << i << " ";
            i += 2;
        }
    }
    

    return 0;
}