#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool check(char a, char b, char c)
{
    set<char>letters = {'a', 'c', 'e'};
    set<char>incomingLetters = {a, b, c};
    return letters == incomingLetters;
}

int main()
{
    int n, m;
    string row;
    vector<string>picture;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> row;
        picture.push_back(row);
    }

    int faces = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(picture[i][j] == 'f')
            {
                if(j + 1 < m && i + 1 < n)
                    if(check(picture[i][j+1], picture[i+1][j], picture[i+1][j+1]))
                        faces++;
                if(j - 1 >= 0 && i + 1 < n)
                    if(check(picture[i][j-1], picture[i+1][j], picture[i+1][j-1]))
                        faces++;
                if(i - 1 >= 0 && j + 1 < m)
                    if(check(picture[i-1][j], picture[i-1][j+1], picture[i][j+1]))
                        faces++;
                if(i - 1 >= 0 && j - 1 >= 0)
                    if(check(picture[i-1][j], picture[i-1][j-1], picture[i][j-1]))
                        faces++;
            }
        }

        cout << faces;

    return 0;
}