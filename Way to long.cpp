#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string str;
        cin >> str;
        if (str.size() < 11)
            cout << str;
        else
            cout << str[0] << str.size() - 2 << str[str.size() - 1];
        cout<<endl;
        t--;
    }
    return 0;
}