#include <iostream>

using namespace std;

int main()
{
    int s, v1, v2, t1, t2, boy1, boy2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    
    boy1 = t1 + (s * v1) + t1;
    boy2 = t2 + (s * v2) + t2;
    if(boy1 == boy2)
        cout << "Friendship";
    else if(boy1 < boy2)
        cout << "First";
    else
        cout << "Second";

    return 0;
}