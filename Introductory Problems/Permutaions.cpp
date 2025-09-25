#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION\n";
        return;
    }

    for (ll i = 2; i <= n; i += 2) cout << i << " ";
    
    for (ll i = 1; i <= n; i += 2) cout << i << " ";
    cout << "\n";
}

int main() {
    fastio;
    solve();
    return 0;
}
