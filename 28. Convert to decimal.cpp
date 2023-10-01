#include <bits/stdc++.h>
using namespace std;
int tobinary(int d)
{
    if (d == 0)
    {
        return 0;
    }

    int binary = 0;
    int base = 1;

    while (d > 0)
    {
        int remainder = d % 2;
        binary += remainder * base;
        base *= 10;
        d /= 2;
    }

    return binary;
}
int todecimal(int b)
{
    int decimal = 0;
    int base = 0;

    while (b > 0)
    {
        int digit = b % 10;
        decimal += digit * pow(2, base);
        base++;
        b /= 10;
    }

    return decimal;
}
int outZeros(int binary)
{
    int result = 0;
    int base = 1;
    while (binary > 0)
    {
        int digit = binary % 10;
        if (digit != 0)
        {
            result += digit * base;
            base *= 10;
        }
        binary /= 10;
    }
    return result;
}

int main()
{
    int tcase;
    cin>>tcase;
    while (tcase > 0)
    {
        int decimal;
        cin >> decimal;
        int p = tobinary(decimal);
        int x = outZeros(p);
        //cout << x << endl;

        cout << todecimal(x) << endl;
        tcase--;
    }
    return 0;
}