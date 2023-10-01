#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count = 0 ;
    int n = str.size()-1;
    int i=0;
    while(i != str.size()/2 ){
        if(str[i] != str[n]){
            count ++ ;}
        n--;
        i+=1;
    }
    if(count == 1 || count ==1 & n%2 ==1)
        cout<<"YES";
    else
        cout<<"NO";}
