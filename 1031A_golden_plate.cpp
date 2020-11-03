#include <iostream>

using namespace std;

int main()
{
    int w, h, k;
    cin >> h >> w >> k;

    int cells = 0;
    for(int i = 1; i <= k; i++)
    {
        cells += w * 2 + ( (h - 2) * 2);
        w -= 4;
        h -= 4;
    }

    cout << cells;

    return 0;
}