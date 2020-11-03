#include <iostream>

using namespace std;

int main()
{
    int n, d, previous, current, move;
    int number = 0;
    cin >> n >> d;
    cin >> previous;
    for(int i = 1; i < n; i++)
    {
        cin >> current;
        if(previous >= current)
        {
            number += move = (previous - current) / d + 1;
            previous = move * d + current;
        }
        else
        {
            previous = current;
        }   
    }

    cout << number;

    return 0;
}