#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long target,years = 0;
    cin >> target;
    long long balance = 100;

    while (balance < target) {
        balance = balance + (balance/100) ; 
        years++;
    }
    cout << years << endl;
    return 0;
}
