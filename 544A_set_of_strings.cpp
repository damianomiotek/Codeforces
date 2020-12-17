#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int k, i;
    string q;
    vector<string> sequence;
    set<char> letters;
    int num_strings = 0;
    cin >> k;
    cin.get();
    getline(cin, q);

    for(i = 0; i < q.length(); i++)
    {
        if(letters.count(q[i]) == 0)
        {
            letters.insert(q[i]);
            sequence.push_back(string());
            sequence[num_strings].push_back(q[i]);
            num_strings++;

            if(num_strings == k)
            {
                sequence[num_strings - 1] = q.substr(i, q.size() - i);
                break;
            }
        }
        else 
            sequence[num_strings - 1].push_back(q[i]);
    }

    if(num_strings == k)
    {
        cout << "YES" << endl;
        for(string seq : sequence)
            cout << seq << endl;
    }
    else 
        cout << "NO";

    return 0;
}