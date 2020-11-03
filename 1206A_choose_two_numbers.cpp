#include <iostream>

using namespace std;

int main()
{
    int n, m, maxA, maxB, number;

    cin >> n;
    cin >> number;
    maxA = number;
    for(int i = 1; i < n; i++)
    {
        cin >> number;
        if(number > maxA)
            maxA = number;
    }
    cin >> m;
    cin >> number;
    maxB = number;
    for(int i = 1; i < m; i++)
    {
        cin >> number;
        if(number > maxB)
            maxB = number;
    }

    cout << maxA << " " << maxB;

    return 0;
}