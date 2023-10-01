#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count ;
    cin>>n;
    for(int i=2; i<=n ;i++)
    {
        count=0;
        for(int j=2 ; j<i;j++)
        {
            if (i % j == 0)
            {
                count = 1;
            }
        }
        if(count == 0)
            cout<<i<<" ";
    }
    return 0;
}