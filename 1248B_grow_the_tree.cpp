#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, pom, i;
    vector<int>sticks;
    long long int sumX = 0;
    long long int sumY = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> pom;
        sticks.push_back(pom);
    }

    sort(sticks.begin(), sticks.end(), [](int a, int b){return a > b;});
    if(n % 2)
    {
        for(i = 0; i <= n/2; i++)
            sumX += sticks[i];
        for(; i < n; i++)
            sumY += sticks[i];
    }
    else
    {
        for(i = 0; i < n/2; i++)
            sumX += sticks[i];
        for(; i < n; i++)
            sumY += sticks[i];
    }

    cout << sumX * sumX + (sumY * sumY);
    
    return 0;
}