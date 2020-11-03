#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, t, data, left_data;
    cin >> a >> b >> c;
    data = a * c;
    left_data = b * c;

    if( (data - left_data) % b == 0)
        t = (data - left_data) / b;
    else
        {
            double double_b = b;
            t = ceil( (data - left_data) / double_b);
        }
    
    cout << t;

    return 0;
}