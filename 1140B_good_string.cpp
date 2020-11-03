#include <iostream>

using namespace std;

int main()
{
    int t, n;
    int fromStart;
    int fromEnd;
    string input;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> input;
        for(fromStart = 0; fromStart < n && input[fromStart] != '>'; fromStart++)
            ;
        for(fromEnd = n - 1; fromEnd >= 0 && input[fromEnd] != '<'; fromEnd--)
            ;

        if(fromStart <= n - fromEnd - 1)
            cout << fromStart << endl;
        else 
            cout << n - fromEnd - 1 << endl;
    }

    return 0;
}