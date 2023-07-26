#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int t = 0; t < x; t++)
    {
        int n, max = 0, index;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > max)
            {
                max = b;
                index = i;
            }
        }
        cout << index << endl;
    }
}