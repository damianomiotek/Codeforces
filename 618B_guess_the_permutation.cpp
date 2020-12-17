#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, number, i, j, max;
    cin >> n;
    vector<int> permutation(n + 1, 0);

    for(i = 1; i <= n; i++)
    {
        max = 0;
        for(j = 1; j <= n; j++)
        {
            cin >> number;
            if(number > max)
                max = number;
        }
        permutation[i] = max;
    }

    bool visited = false;
    for(i = 1; i <= n; i++)
    { 
        if( (permutation[i] == n - 1) && !visited)
        {
            cout << n << " ";
            visited = true;
        }
        else 
            cout << permutation[i] << " ";
    }
            
    return 0;
}