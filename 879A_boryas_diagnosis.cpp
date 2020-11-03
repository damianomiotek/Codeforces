#include <iostream>

using namespace std;

int main()
{
    int n, s, d;
    cin >> n >> s >> d;
    int time = s;
    for(int i = 2; i <= n; i++)
    {
        cin >> s >> d;
        if(s <= time)
        {
            int timeDoctor = 0;
            int j = 1;
            while(timeDoctor <= time)
            {
                timeDoctor = s + (j * d);
                j++;
            }
            time = timeDoctor;
        }
        else 
            time = s;
    }

    cout << time;

    return 0;
}