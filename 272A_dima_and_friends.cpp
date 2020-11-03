#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, inputValue;
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> inputValue;
        sum += inputValue;
    }

    int repeat = n + 1;
    set<int> dimaNumbers;
    dimaNumbers.insert(1);
    inputValue = ( (sum - 1) / repeat) + 1;
    for(int i = 1; i <= 3; i++, inputValue++)
    {
        dimaNumbers.insert( 1 + (repeat * inputValue) );
    }

    int output = 0;
    for(int i = 1; i <= 5; i++)
    {
        if(dimaNumbers.count(sum + i) == 0)
            output++;
    }

    cout << output;

    return 0;
}