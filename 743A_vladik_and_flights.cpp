#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    string airports;
    cin >> n >> a >> b >> airports;
    if(airports[a - 1] == airports[b - 1])
        cout << 0;
    else 
        cout << 1;

    return 0;
}