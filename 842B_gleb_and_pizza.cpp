#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int r, d, n, m, ri;
    double distance, x, y;
    cin >> r >> d;
    m = r -d;
    cin >> n;

    int how_many = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> ri;
        distance = sqrt( pow(x, 2) + pow(y, 2) );
        if(distance >= m + ri && distance + ri <= r)
            how_many++;
    }

    cout << how_many;

    return 0;
}