#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;

    if(n - int(n) == 0)
        cout<<"int "<<int(n);
    else
        cout<<"float "<<int(n)<<" "<<float(n-int(n));
    return 0;
}