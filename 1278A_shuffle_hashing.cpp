#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    string password, hash;
    cin >> t;
    for(int k = 0; k < t; k++)
    {
        cin >> password >> hash;
        int n = hash.size();
        vector<int>vecPassword(26);
        for(int i = 0; i < password.size(); i++)
            ++vecPassword[password[i] - 'a'];
        int i;
        for( i = 0; i < n; i++)
        {
            vector<int>vecHash(26);
            for(int j = i; j < n; j++)
            {
                ++vecHash[ hash[j] - 'a' ];
                if(vecHash == vecPassword)
                {
                    cout << "YES" << endl;
                    j = n;
                    i = n; 
                }
            }
        }

        if(i == n)
            cout << "NO" << endl;
        password.clear();
        hash.clear();
    }
    return 0;
}