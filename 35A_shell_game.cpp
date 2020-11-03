#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<int> cups;
    for(int i = 0; i < 4; i++)
        cups.push_back(i);
    int x, l, p, pom;
    ifstream input("input.txt");
    input >> x;
    while(input >> l >> p)
    {
        pom = cups[l];
        cups[l] = cups[p];
        cups[p] = pom;
    }

    input.close();
    ofstream output("output.txt");
    output << cups[x];
    output.close();

    return 0;
}