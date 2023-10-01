#include<bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

int main()
{
    long long n,ans;
    cin>>n;
    for(int i= 0 ;i<n;i++)
        ans = (ans*2) % M;
    cout<<ans<<endl;
    return 0;
}
