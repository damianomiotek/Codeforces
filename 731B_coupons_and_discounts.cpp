#include <iostream>

using namespace std;

int main()
{
    int n, i, a;
    int coupon = 0;
    string result = "YES";

    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> a;
        if(a == 0 && coupon == 1)
            result = "NO";
        else if(a % 2 && coupon == 1)
            coupon = 0;
        else if(a % 2 && coupon == 0)
            coupon = 1;
    }

    if(result == "YES" && coupon)
        cout << "NO";
    else 
        cout << result << endl;

    return 0;
}