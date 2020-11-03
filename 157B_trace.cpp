#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

#define M_PI       3.14159265358979323846

using namespace std;

int main()
{
    int n, r;
    vector<int>circles;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> r;
        circles.push_back(r);
    }

    sort(circles.begin(), circles.end(), [](int &a, int &b){return a > b;});
    long long int oddR = 0;
    long long int evenR = 0;

    for(int i = 0; i < n; i++)
    {
        if( (i + 1) % 2 == 1 )
            oddR += pow(circles[i], 2);
        else if( (i + 1) % 2 == 0 )
            evenR += pow(circles[i], 2);
    }

    cout.precision(4);
    cout << fixed << M_PI * (oddR - evenR);

    return 0;
}