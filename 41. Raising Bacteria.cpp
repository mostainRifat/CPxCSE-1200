#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,r;
    cin>>n;
    while(n>0)
    {
      c+=n%2;
      n/=2;
    }
    cout<<c<<endl;
}
