#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double n, m , a;
    cin >>n>>m>>a;
    long long int result = ceil(n/a) * ceil(m/a);
    cout << result;
}