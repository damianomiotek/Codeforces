#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, value, index;
    int sum = 0;
    vector< pair<int, int> > days;
    cin >> n >> k;
    for(index = 1; index <= n; index++)
    {
        cin >> value;
        sum += value;
        days.push_back(make_pair(index, value));
    }

    sort(days.begin(), days.end(), [](pair<int, int> a, pair<int, int> b){return a.second < b.second;});
    for(index = days.size() - 1; sum > k; index--)
        sum -= days[index].second;

    cout << index + 1 << endl;
    if(index >= 0)
    {
        for(int i = 0; i <= index; i++)
            cout << days[i].first << " ";
    }


    return 0;
}