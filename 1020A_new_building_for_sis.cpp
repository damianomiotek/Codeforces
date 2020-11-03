#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, h, a, b, k, ta, tb, fa, fb, fPom, time;
    cin >> n >> h >> a >> b >> k;

    for(int i = 0; i < k; i++)
    {
        cin >> ta >> fa >> tb >> fb;
        if(ta == tb)
        {
            cout << abs(fa - fb) << endl;
        }
        else
        {
            if(fb > b)
            {
                time = fb - b;
                fPom = b;
            }
            else if(fb < a)
            {
                time = a - fb;
                fPom = a;
            }
            else
            {
                time = 0;
                fPom = fb;
            }

            time += abs(ta - tb);
            time += abs(fa - fPom);
            cout << time << endl;
        }
        
    }

    return 0;
}