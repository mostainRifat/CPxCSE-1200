#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    long long int x, y,r=1;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                r = (y - 1) * (y - 1);
                cout << r + x << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                r = (x - 1) * (x - 1);
                cout << r + y  << endl;
            }
        }
    }
    return 0;
}