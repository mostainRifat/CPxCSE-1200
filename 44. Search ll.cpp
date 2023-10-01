#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    cin >> q;
    vector<int> T(q);
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }
    sort(S.begin(), S.end());

    int count = 0;
    for (int i = 0; i < q; i++) {
        if (binary_search(S.begin(), S.end(), T[i])) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
