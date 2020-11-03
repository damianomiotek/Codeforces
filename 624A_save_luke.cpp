#include <iostream>

using namespace std;

int main()
{
    double d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;
    cout.precision(7);
    cout << fixed << (L - d) / (v1 + v2);

    return 0;
}