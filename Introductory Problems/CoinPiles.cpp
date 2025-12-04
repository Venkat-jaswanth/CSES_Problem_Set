#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (((a == 0 && b != 0) || (b == 0 && a != 0))){
            cout << "NO\n";
            continue; 
        }
        int c,d;
        c = a;
        d = b;
        a %= 3;
        b %= 3;
        a %= MOD;
        b %= MOD;
        if (((a == 2 && b == 1) ||
            (a == 1 && b == 2) ||
            (a == 0 && b == 0)) && max(c, d) <= 2 * min(c, d))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
