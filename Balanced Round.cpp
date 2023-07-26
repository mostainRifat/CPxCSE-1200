#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int n, k, count = 1, max = -1;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            if (count >= max)
                max = count;
            if (abs(arr[i] - arr[i + 1]) <= k)
                count++;
            else
                count = 1;
        }
        
        if (n == 1)
            max = 1;

        cout << n - max << endl;
    }
    return 0;
}