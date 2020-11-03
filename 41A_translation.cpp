#include <iostream>

using namespace std;

int main()
{
    string word1, word2;
    bool theSame = true;
    getline(cin, word1);
    getline(cin, word2);

    if(word1.size() != word2.size())
        theSame = false;
    else
    {
        for(int i = 0, j = word2.size() - 1; i < word1.size(); i++, j--)
            if(word1[i] != word2[j])
            {
                theSame = false;
                break;
            }
    }

    if(theSame)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}