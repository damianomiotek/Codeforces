#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, pom, indexChange, shifts, changes;
    vector<int>numbers;

    cin >> n;
    cin >> pom;
    numbers.push_back(pom);
    changes = 0;

    for(int i = 1; i < n; i++)
    {
        cin >> pom;
        if(numbers[i - 1] > pom && changes == 0)
        {
            changes++;
            indexChange = i;
        }
        else if(numbers[i - 1] > pom)
            changes++;

        numbers.push_back(pom);
    }

    if(changes == 0)
        cout << 0;
    else if(changes > 1)
        cout << -1;
    else if(changes == 1)
    {
        if(numbers[n - 1] <= numbers[0])
        {
            shifts = n - indexChange;
            cout << shifts;
        }
        else 
            cout << -1;
    }

    return 0;
}