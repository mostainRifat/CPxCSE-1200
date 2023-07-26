#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0,ng=0,p=0;
    cin>>n;
    int arr[n+2];
    for(int i=0 ;i< n;i++)
    {
        cin>>arr[i];
        if(arr[i] % 2 == 0)
            e++;
        else
            o++;
        
        if(arr[i]>0)
            p++;
        else if(arr[i] < 0)
            ng++;
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<ng<<endl;

}