#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, zeros, ones, twos, divided_by_3, higher, smaller;
    int integer, modulo;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        zeros = ones = twos = divided_by_3 = 0;
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> integer;
            modulo = integer % 3;

            if(modulo == 0)
                zeros++;
            else if(modulo == 1)
                ones++;
            else 
                twos++;
        }

        divided_by_3 = zeros;
        if(ones > twos)
        {
            higher = ones;
            smaller = twos;
        }
        else 
        {
            higher = twos;
            smaller = ones;
        }

        divided_by_3 += smaller;
        divided_by_3 += (higher - smaller) / 3;
        
        cout << divided_by_3 << endl;
    }


    return 0;
}