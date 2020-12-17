#include <iostream>

using namespace std;

int main()
{
    int n, x, a, b, c, d, number_up, number_down;
    string result = "YES";
    cin >> n >> x;
    number_down = 7 - x;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        c = 7 - a;
        d = 7 - b;
        if(number_down == a || number_down == b || number_down == c || number_down == d)
            result = "NO";
    }

    cout << result;
    
    return 0;
}