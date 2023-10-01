#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n = str.size()-1;
    for(int i = 0 ; i<= n/2 ;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(str[i]==str[j])
            {
                swap(str[n],str[j]);
                n--;
                break;
            }
            else
                swap(str[i] , str[(n/2)+1]);
        }
    }
    cout<<str;
}