#include <iostream>

using namespace std;
int main()
{
    string input;
    getline(cin, input);
    int counter = 0;
    for(int i = 0; i < input.size(); i++)
        for(int j = i + 1; j < input.size(); j++)
            for(int k = j + 1; k < input.size(); k++)
                if(input[i] == 'Q' && input[j] == 'A' && input[k] == 'Q')
                    counter++;

    cout << counter;

    return 0;
}