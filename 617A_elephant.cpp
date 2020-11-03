#include <iostream>

using namespace std;

int main()
{
    int x, steps;

    cin >> x;
    if(x <= 5)
        steps = 1;
    else
    {
        steps = x / 5;
        if(x % 5)
            steps++;
    }
    
    cout << steps;

    return 0;
}
