#include <bits/stdc++.h>
using namespace std;
const float pi = 2 * acos(0.0);
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int r;
        cin >> r;
        cout <<"Case "<<t<<": "<< (2 * r) * (2 * r) - (pi * r * r) << endl;

        t--;
    }
}
