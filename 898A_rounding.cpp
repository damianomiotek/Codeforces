#include <iostream>

using namespace std;

int main()
{
    int n, rest;
    cin >> n;

    rest = n % 10;
    if(rest <= 5)
        cout << n - rest;
    else 
        cout << n + (10 - rest);   

    return 0;
}