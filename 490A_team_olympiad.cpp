#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, pom, min;
    vector< int >first;
    vector< int >second;
    vector< int >third;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> pom;
        if(pom == 1)
            first.push_back(i);
        else if(pom == 2)
            second.push_back(i);
        else if(pom == 3)
            third.push_back(i);
    }

    if(first.size() <= second.size() && first.size() <= third.size())
        min = first.size();
    else if(second.size() <= first.size() && second.size() <= third.size())
        min = second.size();
    else if(third.size() <= first.size() && third.size() <= second.size())
        min = third.size();

    if(min == 0)
        cout << min << endl;
    else
    {
        cout << min << endl;
        for(int i = 0; i < min; i++)
        {
            cout << first[i] << " " << second[i] << " " << third[i] << endl;
        }
    }
    

    return 0;
}