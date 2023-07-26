#include <bits/stdc++.h>
using namespace std;

const int maxn = 10e5+1;
int main()
{
    int N, M;
    cin >> N >> M;

    int arr[maxn] = {0};

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i <= M; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}
