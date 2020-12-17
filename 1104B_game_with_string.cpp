#include <iostream>

using namespace std;

string input;
bool find(int& position)
{
    for(int i = 1; i < input.size(); i++)
    {
        if(input[i] == input[i - 1])
        {
            position = i - 1;
            return true;
        }
    }
    return false;
}

int main()
{
    getline(cin, input);
    int position = 0;
    int i = 1;
    
    while(find(position))
    {
        input.erase(position, 2);
        i++;
    }

    if(i % 2)
        cout << "No";
    else 
        cout << "Yes";

    return 0;
}