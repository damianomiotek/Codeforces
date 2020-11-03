#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, pom;
    vector<int>numbers;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> pom;
        numbers.push_back(pom);
    }

    sort(numbers.begin(), numbers.end(), [](int a, int b){return a < b;});
    if(n % 2)
        cout << numbers[n/2];
    else 
        cout << numbers[n/2 -1];
    
    return 0;
}