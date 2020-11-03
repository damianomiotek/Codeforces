#include <iostream>

using namespace std;

int main()
{
    int n;
    string input;
    cin >> n;
    cin.get();
    getline(cin, input);
    int i = 0;
    int sum = 0;

    while(input[i] == '<' && i < n)
    {
        i++;
        sum++;
    }

    if(i == n)
        cout << sum << endl;
    else
    {
        i = n - 1;
        while(input[i] == '>' && i >= 0)
        {
            i--;
            sum++;
        }
        cout << sum << endl;
    }
    

    return 0;
}