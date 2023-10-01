#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k = 1;
    cin >> t;
    while (k <= t)
    {
        string a;
        long long b,dv=0,j,len;
        cin >> a>>b;

        if (a[0] == '-')
            j = 1;
        else 
            j=0;
        len = a.length();

        for(;j<len;j++)
        {
            dv = dv *10 + (a[j]-'0');
            dv = dv%b;
        }

        if (dv)
            cout << "Case " << k << ": "<< "not divisible"<<endl;
        else
            cout << "Case " << k << ": "<< "divisible"<<endl;
        k++;
    }
    return 0;
}