#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int half = n / 2;
    int firstHalf = 1;
    int secondHalf = n * n;
    
    for(int index = 1; index <= n; index++)
    {
        for(int i = 1; i <= half; i++, firstHalf++, secondHalf--)
        {
            cout << firstHalf << " " << secondHalf << " ";
        }
        cout << endl;
    }

    return 0;
}