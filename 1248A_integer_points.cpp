#include <iostream>
#include <vector>
#include <cmath>

// This example must be improved
using namespace std;

int main()
{
    int t, n, m, pom, intersections;
    vector<int> ps, qs;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> pom;
            ps.push_back(pom);
        }

        cin >> m;
        for(int j = 0; j < m; j++)
        {
            cin >> pom;
            qs.push_back(pom);
        }

        intersections = 0;
        for(int j = 0; j < n; j++)
            for(int k = 0; k < m; k++)
                if(abs(ps[j] - qs[k]) % 2 == 0)
                    intersections++;
        
        cout << intersections << endl;
        ps.clear();
        qs.clear();
    }

    return 0;
}
