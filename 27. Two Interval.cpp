#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,x,y;
    cin>>l>>r>>x>>y;
    

    if(l<=x && x<=r )
    {
        if(y>r)
            cout<<x<<" "<<r<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
    else if(l<=y && y<=r)
    {
        if(x<l)
            cout<<l<<" "<<y<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
    else cout<<-1<<endl;
}