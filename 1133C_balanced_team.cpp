#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);

    for(int i = 0; i < n; i++)
        cin >> numbers[i];

    sort(numbers.begin(), numbers.end());

    int ans = 0;
    int j = 0;
    for(int i = 0; i < n; ++i)
        while(j < n && numbers[j] - numbers[i] <= 5)
        {
            ++j;
            ans = max(ans, j - i);
        }

    cout << ans << endl;

    return 0;
}