#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n, k, e, s, absDifference;
    int max = 0;
    cin >> n >> k;
    vector<int> numbers(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> numbers[i];

    for(int i = 1; i <= k; i++)
    {
        e = s = 0;
        for(int j = 1; j <= n; j++)
            if(j == i || ( (j - i) % k == 0) )
                continue;
            else
            {
                if(numbers[j] == 1)
                    e++;
                else
                    s++;
            }
        
        absDifference = abs(e - s);
        if(absDifference > max)
            max = absDifference;       
    }

    cout << max;

    return 0;
}
