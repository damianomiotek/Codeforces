#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> filters(n, 0);
    for(int j = 0; j < n; j++)
        cin >> filters[j];
    
    if(m <= k)
        cout << 0;
    else if(n >= k)
    {
        sort(filters.begin(), filters.end(), [](int &a, int &b){return a > b;});
        int i = 0;
        int pom = 0;
        for(i; i < k; i++)
        {
            pom += filters[i];
            if(m - pom <= k - i - 1)
                break;
        }

        if(i < k)
            cout << i + 1;
        else
        {
            for(i; i < n; i++)
            {
                pom += filters[i] - 1;
                if(m - pom <= 0)
                    break;
            }

            if(i < n)
                cout << i + 1;
            else 
                cout << -1;
        }
    }
    else
    {
        sort(filters.begin(), filters.end(), [](int &a, int &b){return a > b;});
        int i = 0;
        int pom = 0;
        for(i; i < n; i++)
        {
            pom += filters[i];
            if(m - pom <= k - i - 1)
                break;
        }

        if(i < n)
            cout << i + 1;
        else 
            cout << -1;
    }
    

    return 0;
}