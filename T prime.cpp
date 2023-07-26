#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p,count;
    long long int n;
    cin >> p;

    for (int j = 0; j < p; j++)
    {
        count = 0;
        cin >> n;

        for (int i = 2; i <= n/2; i--)
        {
            if (count >= 2)
                break;

            else if (n % i == 0)
                count++;
        }

        if( count == 1)
            cout << "YES" << endl;
        else
            cout<<"NO"<<endl;

        cout<<count<<endl;
    }

    return 0;
}