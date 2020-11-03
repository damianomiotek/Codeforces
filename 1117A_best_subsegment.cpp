#include <iostream>

using namespace std;

int main()
{
    int n, number, previous, max, len;
    cin >> n;
    max = previous = -1;
    pair<int, int> maxLen(1, 1);
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        if(number == previous && number == max)
        {
            ++len;
            if(maxLen.second < len)
                maxLen.second++;
        }
        else if(number > max)
        {
            max = previous = number;
            len = 1;
            maxLen = make_pair(number, len);
        }
        else 
        {
            previous = number;
            len = 1;
        }
    }

    cout << maxLen.second;

    return 0;
}