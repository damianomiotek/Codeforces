#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    vector<int> colors(n, 0);

    for(i = 0; i < n; i++)
        cin >> colors[i];

    int distance1, distance2;
    int first = colors[0], last = colors[n - 1];
    for(i = n - 1; i > 0; i--)
        if(first != colors[i])
        {
            distance1 = (i + 1) - 1;
            break;
        }

    for(i = 0; i < n - 1; i++)
        if(last != colors[i])
        {
            distance2 = n - (i + 1);
            break;
        }
    
    cout << max(distance1, distance2);
    

    return 0;
}