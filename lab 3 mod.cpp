#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000007;
long long powmod(int x, int y)
{
    long long result = 1;
    x=x%10;

    while (y> 0)
    {
        if(y & 1)
            result = (result * x) % MOD;
         y >>=1;
         x = (x*x)%MOD;
    }
    return result;
}

int main()
{
    int x,y;
    cout<<"Enter Value of x and Y: ";
    cin>>x>>y;

    long long result = powmod(x,y);
    cout<<"Result: "<<result<<endl;

    return 0;
}