#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    //int previous = 1;
    int fours = 0;
    int cells = 1;
    for(int i = 1; i <= n; i++)
    {
        cells += fours;
        fours += 4;
    }

    cout << cells;
    
    return 0;
}