#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int count = 0;
    sort(st.begin(), st.end());
    do{
        count++;
    }
    while(next_permutation(st.begin(), st.end()));    
    cout<<count<<endl;
    do{
        cout << st << endl;
    } while (next_permutation(st.begin(), st.end()));
}