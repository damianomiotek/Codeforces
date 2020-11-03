#include <iostream>
#include <vector>

using namespace std;

bool divisedByThree(vector<int> &a)
{
    int sum = 0;
    for(int i = 0; i < a.size(); i++)
        sum += a[i];
    
    if(sum % 3)
        return false;
    else 
        return true;
}

bool zeroOccurence(vector<int> &a)
{
    for(int i = 0; i < a.size(); i++)
        if(a[i] == 0)
            return true;

    return false;
}

bool twoEvenDigits(vector<int> &a)
{
    int evens = 0;
    for(int i = 0; i < a.size(); i++)
        if(a[i] % 2 == 0)
            evens++;

    if(evens >= 2)
        return true;
    else 
        return false;
}

bool divisedBySixty(vector<int> &a)
{
    if(divisedByThree(a) && zeroOccurence(a) && twoEvenDigits(a))
        return true;
    else
        return false;
    
}

int main()
{
    int n;
    vector<int>numbers;
    string number;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> number;
        for(int j= 0; j < number.size(); j++)
        {
            numbers.push_back(number[j] - 48);
        }

        if(divisedBySixty(numbers))
            cout << "red" << endl;
        else 
            cout << "cyan" << endl;

        numbers.clear();
    }

    return 0;
}