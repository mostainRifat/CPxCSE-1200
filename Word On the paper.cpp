#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {

        string input[8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> input[i][j];
            }
        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if(input[i][j] != '.')
                    cout<<input[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}