#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    string a, b;
    cin >> n;
    cin.get();
    getline(cin, a);
    getline(cin, b);

    vector<int> indexes_where_zeroes_b;
    for(int i = 0; i < b.size(); i++)
        if(b[i] == '0')
            indexes_where_zeroes_b.push_back(i);

    int zeroes_a = 0;
    int ones_a = 0;
    int zeroes_a_indexes_b = 0;
    int ones_a_indexes_b = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '0')
            zeroes_a++;
        else if(a[i] == '1')
            ones_a++;
    }
    long long sum = 0;
    for(int i = 0; i < indexes_where_zeroes_b.size(); i++)
        if(a[indexes_where_zeroes_b[i]] == '0')
        {
            sum += ones_a;
            zeroes_a_indexes_b++;
        }
        else if(a[indexes_where_zeroes_b[i]] == '1')
        {
            sum += zeroes_a;
            ones_a_indexes_b++;
        }

    sum -= (ones_a_indexes_b * zeroes_a_indexes_b);
    // cout.precision(0);
    cout << sum;

    return 0;
}