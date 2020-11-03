#include <iostream>
#include <vector>

using namespace std;

int nwd(int a, int b)
{
    int pom;
    while(b != 0)
    {
        pom = a % b;
        a = b;
        b = pom;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++)
        cin >> numbers[i];

    int nwdv = numbers[0];
    for(int i = 1; i < numbers.size(); i++)
        nwdv = nwd(nwdv, numbers[i]);

    cout << nwdv * numbers.size();

    return 0;
}