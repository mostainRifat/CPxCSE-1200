#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>st;
    while(n!=0)
    {
        int p =0;
        cin>>p;
        st.insert(p);
        n--;
    }
    cout<<st.size()<<endl;
}