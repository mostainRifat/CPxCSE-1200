#include<bits/stdc++.h>
using namespace std;
long long factorial(int a)
{
    if(a==0 || a==1)
        return 1;
    return a*factorial(a-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}