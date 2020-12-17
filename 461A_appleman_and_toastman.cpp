#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, pom;
    vector<int> numbers;
    cin >> n;
    long long int sum = 0;
    long long int score;
    for(int i = 0; i < n; i++)
    {
        cin >> pom;
        numbers.push_back(pom);
        sum += pom;
    }

    if(n == 1)
        cout << sum;
    else
    {
        sort(numbers.begin(), numbers.end(), [](int a, int b){return a > b;});
        score = sum;
        for(int i = n - 1; i > 0; i--)
        {
            score += sum;
            sum -= numbers[i];
        }

        cout << score;
    }

    return 0;
}