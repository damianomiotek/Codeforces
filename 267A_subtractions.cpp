#include <iostream>

using namespace std;

int main()
{
    int n, a, b, pom, result, higher, lesser;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        result = 0;
        cin >> a >> b;
        if(b >= a)
        {
            higher = b;
            lesser = a;
        }
        else
        {
            higher = a;
            lesser = b;
        }

        while(lesser)
        {
            result += pom = higher / lesser;
            higher -= lesser * pom;

            if(lesser > higher)
            {
                pom = higher;
                higher = lesser;
                lesser = pom;
            }
        }

        cout << result << endl;
    }

    return 0;
}