#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int t, n, number;
    set<int> numbers;
    vector<int> output;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for(int j = 0; j < n * 2; j++)
        {
            cin >> number;
            if(numbers.count(number) == 0)
            {
                numbers.insert(number);
                output.push_back(number);
            }
        }

        for(int el : output)
            cout << el << " ";
        cout << endl;
        output.clear();
        numbers.clear();
    }

    return 0;
}