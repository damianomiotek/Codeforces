#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n, j, minCandies, minOranges, candiesToEat, orangesToEat, buffer;
    long long moves;
    vector<int>candies;
    vector<int>oranges;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> buffer;
        minCandies = buffer;
        candies.push_back(buffer);
        for(j = 0; j < (n - 1); j++)
        {
            cin >> buffer;
            candies.push_back(buffer);
            if(buffer < minCandies)
                minCandies = buffer;
        }
        cin >> buffer;
        minOranges = buffer;
        oranges.push_back(buffer);
        for(j = 0; j < (n - 1); j++)
        {
            cin >> buffer;
            oranges.push_back(buffer);
            if(buffer < minOranges)
                minOranges = buffer;
        }

        moves = 0;
        for(j = 0; j < n; j++)
            if(candies[j] > minCandies || oranges[j] > minOranges)
            {
                candiesToEat = candies[j] - minCandies;
                orangesToEat = oranges[j] - minOranges;

                if(candiesToEat > orangesToEat)
                    moves += candiesToEat;
                else
                    moves += orangesToEat;
            }

        cout << moves << endl;
        candies.clear();
        oranges.clear();
    }

    return 0;
}