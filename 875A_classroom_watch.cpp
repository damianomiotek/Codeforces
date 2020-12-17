#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, s, pom, sum, num_of_digits;
    vector<int> numbers;
    cin >> n;
    k = 0;

    if(n >= 20)
    {
        pom = n;
        num_of_digits = 0;
        while(pom)
        {
            pom /= 10;
            num_of_digits++;
        }
        
        int i = n - (num_of_digits * 9);
        for(i; i < n; i++)
        {
            sum = i;
            pom = i;
            while(pom)
            {
                sum += pom % 10;
                pom = pom / 10;
            }
            if(sum == n)
            {
                k++;
                numbers.push_back(i);
            }
        }
    }
    else
    {
        for(int i = 1; i < n; i++)
        {
            sum = i;
            pom = i;
            while(pom)
            {
                sum += pom % 10;
                pom = pom / 10;
            }
            if(sum == n)
            {
                k++;
                numbers.push_back(i);
            }
        }
    }

    if(k == 0)
        cout << 0;
    else
    {
        cout << k << endl;
        for(const auto a : numbers)
            cout << a << " ";
    }


    return 0;
}