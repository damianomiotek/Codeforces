#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    int positions = 0;
    cin >> n >> a >> b;
    for(int i = 0; i <= b; i++)
    {
        if(n - i - 1 >= a)
            positions++;
        else 
            break; 
    }

    cout << positions;
    
    return 0;
}