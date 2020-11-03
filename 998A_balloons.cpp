#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, balloon;
    int sum = 0;
    vector<int>balloons;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> balloon;
        balloons.push_back(balloon);
        sum += balloon;
    }

    if(balloons.size() == 1)
        cout << -1 << endl;
    else if(balloons.size() == 2)
    {
        if(balloons[0] == balloons[1])
            cout << -1 << endl;
        else 
            cout << 1 << endl << 1 << endl;
    }
    else if(balloons.size() > 2)
    {
        for(int i = 0; i < balloons.size(); i++)
            if( (sum % 2 == 0) && (sum - balloons[i] != sum / 2) )
            {
                cout << 1 << endl << i + 1 << endl;
                break;
            }
            else if(sum % 2 != 0)
            {
                cout << 1 << endl << i + 1 << endl;
                break;
            }
    }

    return 0;

}