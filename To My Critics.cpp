#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , count;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        for (int j = 0; j < 3; j++)
            cin >> arr[j];
        count =0;

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[j] + arr[k] >= 10 && k!=j)
                {
                    count++;
                }
            }
        }
        if (count == 0)
            cout << "NO"<<endl;
        else
            cout<<"YES"<<endl;
        
    }
    return 0;
}