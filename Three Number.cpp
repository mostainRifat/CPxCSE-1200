#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s,count =0 ;
    cin>>n>>s;
    for(int i =0; i<=n ; i++)
    {
        for(int j=0 ;j<=n; j++)
        {
            for(int k = 0;k<=n;k++)
            {
                if(k + j + i == s)
                count ++;
            }
        }
    }
    cout<<count<<endl;
}