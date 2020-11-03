#include <iostream>

using namespace std;

int main()
{
    int n, d, m, x, y;
    cin >> n >> d >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> x >> y;
        bool ok = true;

        if( !( x + y >= d && x + y <= 2 * n - d) )
            ok = false;
        if( !(x - y >= d * (-1) && x - y <= d) )
            ok = false;

        if(ok)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

}