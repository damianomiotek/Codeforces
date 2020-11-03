#include <iostream>
#include <set>
using namespace std;

int main()
{
    long long int m, n, k;

    int cnt = 0, ans = 0;
    string s,s1;
    cin >> n >> k;
    set<char> st;
    for(int i = 0; i < n; i++)
    {
        cin>>s;
        for(int j = 0; j < s.size(); j++)
        {
            if( (s[j] - '0')  <= k )  
                st.insert(s[j]);
        }

        if(st.size() == k + 1)
            ans++;

        st.clear();
    }
    cout << ans;

    return 0;
}