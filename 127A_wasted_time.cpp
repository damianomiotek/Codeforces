#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct point
{
    int x;
    int y;
};

double euclidean(const point &a, const point &b)
{

    return sqrt( pow(a.x - b.x, 2) + pow(a.y - b.y, 2) );
}

int main()
{
    int n, k, pom;
    vector<point>points;
    point p;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> pom;
        p.x = pom;
        cin >> pom;
        p.y = pom;
        points.push_back(p);
    }

    double distance = 0;
    for(int i = 0; i < n - 1; i++)
        distance += euclidean(points[i], points[i + 1]);

    double seconds = (distance / 50.0) * k;

    cout.precision(7);
    cout << fixed << seconds;


    return 0;
}