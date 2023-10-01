#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t!=0)
    {
        long long int l,r,sum=0;
        cin>>l>>r;
        if(l>r)
            swap(l,r);
        //int p = r-l+1;
        sum=(r*(r+1)/2) - (l*(l-1)/2);
        cout<<sum<<endl;
        t--;
    }
}