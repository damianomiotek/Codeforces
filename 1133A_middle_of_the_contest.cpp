#include <cstdio>

using namespace std;

int main()
{
    int h1, h2, m1, m2, mins, hrs;
    scanf("%2d:%2d", &h1, &m1);
    scanf("%2d:%2d", &h2, &m2);
    
    hrs = h2 - h1;
    if(hrs > 1)
    {
        mins = 60 - m1 + m2 + (--hrs * 60);
        mins /= 2;

        h1 += mins / 60;
        mins = mins % 60 + m1;
        if(mins >= 60)
        {
            h1 += 1;
            mins %= 60;
        }

        printf("%02d:%02d", h1, mins);
    }
    else if(hrs == 1)
    {
        mins = (60 - m1 + m2) / 2;
        mins += m1;
        if(mins >= 60)
        {
            h1 += mins / 60;
            mins = mins % 60;
        }

        printf("%02d:%02d", h1, mins);
    }
    else
    {
        mins = (m2 - m1) / 2;
        mins += m1;

        printf("%02d:%02d", h1, mins);
    }
    
}