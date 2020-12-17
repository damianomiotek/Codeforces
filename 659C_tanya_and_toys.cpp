#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n, m, i, pom;
    unordered_set<int> collected_toys;
    unordered_set<int> new_toys;
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        cin >> pom;
        collected_toys.insert(pom);
    }

    int sum = 0;
    for(i = 1; sum < m; i++)
        if(collected_toys.count(i) == 0)
        {
            new_toys.insert(i);
            sum += i;
        }

    if(sum > m)
    {
        sum -= --i;
        new_toys.erase(i);
    }

    cout << new_toys.size() << endl;
    for(auto const toy: new_toys)
        cout << toy << " ";

    return 0;
}