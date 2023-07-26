#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m%n == 0)
        cout<<"Multiples";
        
    else if(n%m == 0)
        cout<<"Multiples";

    else 
        cout<<"No Multiples";
    
    return 0;

}