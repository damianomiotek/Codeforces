#include <iostream>

using namespace std;

int main()
{
    int t, h, m;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> h >> m;
        cout << (60 - m) + ( (23 - h) * 60) << endl;
    }

    return 0;
}
