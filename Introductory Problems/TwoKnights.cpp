#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    long long ans;
    cin >> a;

    for (int k = 1; k <= a; k++) {
        ans = (1LL * k * k * (k * k - 1)) / 2;   // total pairs
        ans -= 4LL * (k - 1) * (k - 2);          // subtract attacking
        cout << ans << '\n';
    }
    return 0;
}
