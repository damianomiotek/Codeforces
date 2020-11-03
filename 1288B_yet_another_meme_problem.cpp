#include <iostream>

using namespace std;

int main()
{
    long long int t, a, b, result;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        result = a * (to_string(b + 1).size() - 1);
        cout << result << endl;
    }

    return 0;
}