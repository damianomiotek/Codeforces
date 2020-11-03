#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, counter, output;
    string input;
    vector<int> ones;

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> input;
        for(int j = 0; j < input.size(); j++)
        {
            if(input[j] == '1')
            {
                counter = 1;
                j++;
                while(j < input.size() && input[j] == '1')
                {
                    j++;
                    counter++;
                }
                ones.push_back(counter);
            }
        }
        sort(ones.begin(), ones.end(), [](int a, int b){return a > b;});
        output = 0;
        for(int j = 0; j < ones.size(); j += 2)
            output += ones[j];

        cout << output << endl;
        ones.clear();
    }

    return 0;
}