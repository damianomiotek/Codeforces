#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> input(n, 0);
    vector<int> output(n, 0);

    for(int i = 0; i < n; i++)
        cin >> input[i];

    int max = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(input[i] > max)
        {
            output[i] = 0;
            max = input[i];
        }
        else
            output[i] = max - input[i] + 1;
    }

    for(int i = 0; i < n; i++)
        cout << output[i] << " ";

    return 0;
}