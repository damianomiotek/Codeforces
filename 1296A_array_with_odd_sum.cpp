#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, number, sum;
    vector<int>numbers;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        sum = 0;
        for(int j = 0; j < n; j++)
        {
            cin >> number;
            numbers.push_back(number);
            sum += number;
        }

        if(sum % 2)
            cout << "YES" << endl;
        else
        {
            bool evenExist = false;
            bool oddExist = false;
            for(int j = 0; j < numbers.size(); j++)
            {
                if(numbers[j] % 2)
                    oddExist = true;
                else if(numbers[j] % 2 == 0)
                    evenExist = true;
            }

            if(oddExist && evenExist)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        numbers.clear();
    }

    return 0;
}