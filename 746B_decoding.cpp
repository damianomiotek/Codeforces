#include <iostream>

using namespace std;

int main()
{
    int n;
    string input, output;
    cin >> n >> input;
    string::iterator it = input.begin();
    while(it != input.end())
    {
        if(input.size() % 2)
            output.push_back(*it);
        else
            output.insert(0, 1, *it);
            
        it = input.erase(it);
    }

    cout << output;

    return 0;
}