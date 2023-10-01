#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    for (auto& x : s1) 
        x = tolower(x);
    for (auto& y : s2) 
        y = tolower(y);
    
    int result = s1.compare(s2);
    if (result == 0)
        cout << "0" << endl;
    else if (result < 0)
        cout << "-1" << endl;
    else
        cout << "1" << endl;
    return 0;
}
