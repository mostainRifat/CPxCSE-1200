#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , count = 0;
    cin >> n ;
    string input ;
    cin>>input;
    
    for(int i=0 ; i<n;i++)
    {
        if(input[i] == input[i+1])
            count++;
    }
    cout<<count<<endl;

}