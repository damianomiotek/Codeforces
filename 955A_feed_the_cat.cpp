#include <iostream>

using namespace std;

int main()
{
    int hh, mm, h, d, c, n, buns, buns_after_discount, hours, minutes, hunger_after_discount;
    double result, result_after_discount;
    cin >> hh >> mm >> h >> d >> c >> n;
    if(hh >= 20)
    {
        buns = h / n;
        if(h % n)
            buns++;
        
        result_after_discount = buns * c;
        result_after_discount -= 0.2 * result_after_discount;
        cout.precision(4);
        cout << fixed << result_after_discount;
    }
    else
    {
        buns = h / n;
        if(h % n)
            buns++;
        result = buns * c;
        
        hours = 20 - hh;
        if(hours == 1)
            minutes = 60 - mm;
        else
            minutes = (hours - 1) * 60 + 60 - mm;

        hunger_after_discount = minutes * d + h;
        buns_after_discount = hunger_after_discount / n;
        if(hunger_after_discount % n)
            buns_after_discount++;
        
        result_after_discount = buns_after_discount * c;
        result_after_discount -= 0.2 * result_after_discount;
        if(result_after_discount < result)
        {
            cout.precision(4);
            cout << fixed << result_after_discount;
        }
        else
        {
            cout.precision(4);
            cout << fixed << result;
        }
    }

    return 0;
}