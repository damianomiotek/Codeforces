#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    int ones = 0;
    int zeros = 0;

    cin >> n;
    cin.get();
    for(int i = 0; i < n; i++)
    {
        cin.get(c);
        if(c == 'n')
            ones++;
        else if(c == 'z')
            zeros++;
    }

    for(int i = 0; i < ones; i++)
    {
        cout << 1 << " ";
    }
    for(int i = 0; i < zeros; i++)
    {
        cout << 0 << " ";
    }

    return 0;
}