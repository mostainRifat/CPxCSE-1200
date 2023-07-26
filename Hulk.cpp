#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        for (int i = n; i > 0; i--)
        {
            if (i % 2 == 0)
            {
                cout << "I hate ";
                if (i > 1)
                    cout << "that ";
            }
            else
            {
                cout << "I love ";
                if (i > 1)
                    cout << "that ";
            }
        }
    }

    else
    {
        for (int i = n; i > 0; i--)
        {
            if (i % 2 != 0)
            {
                cout << "I hate ";

                if (i > 1)
                    cout << "that ";
            }

            else
            {
                cout << "I love ";
                if (i > 1)
                    cout << "that ";
            }
        }
    }

    cout << "it";
}