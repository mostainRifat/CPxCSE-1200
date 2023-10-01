#include <bits/stdc++.h>
using namespace std;
bool findUnique(int num)
{
    set<int> countDigit;
    while (num > 0)
    {
        int digit = num % 10;
        countDigit.insert(digit);
        num /= 10;
    }
    if (countDigit.size() == 4)
        return true;
    else 
        return false;
}
int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++;
        bool p = findUnique(y);
        if (p == 1)
        {
            cout << y << endl;
            return 0;
        }
    }
    return 0;
}