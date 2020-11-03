#include <iostream>

using namespace std;

int main()
{
    string word;
    int lowercase = 0;
    int uppercase = 0;
    cin >> word;

    for(int i = 0; i < word.size(); i++)
    {
        if(word[i] > 96)
            lowercase++;
        else
            uppercase++;
    }

    if(lowercase >= uppercase)
    {
        for(string::iterator it = word.begin(); it != word.end(); it++)
            if(*it < 97)
                *it = *it + 32;
    }
    else
    {
        for(string::iterator it = word.begin(); it != word.end(); it++)
            if(*it > 96)
                *it = *it - 32;
    }
    
    cout << word;

    return 0;
}