#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t, n, pom, moves;
    set<int> numbers;
    int item;
    
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> pom;
            if(pom % 2 == 0)
                numbers.insert(pom);
        }

        moves = 0;
        while(numbers.size())
        {
            item = *(numbers.rbegin());
            numbers.erase(item);
            if(item % 2 == 0)
            {
                item /= 2;
                numbers.insert(item);
                moves++;
            }
        }
        cout << moves << endl;
    }

    return 0;
}