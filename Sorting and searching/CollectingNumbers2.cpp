#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n+1), pos(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int rounds = 1;
    for (int x = 1; x < n; x++) {
        if (pos[x+1] < pos[x]) rounds++;
    }

    auto contributes = [&](int x) {
        if (x >= 1 && x < n) {
            return pos[x+1] < pos[x];
        }
        return false;
    };

    while (m--) {
        int i, j;
        cin >> i >> j;
        int A = a[i], B = a[j];

        vector<int> cand = {A, A-1, A+1, B, B-1, B+1};
        sort(cand.begin(), cand.end());
        cand.erase(unique(cand.begin(), cand.end()), cand.end());
        for (int x : cand)
            if (x >= 1 && x < n)
                rounds -= contributes(x);

        swap(a[i], a[j]);
        swap(pos[A], pos[B]);

        for (int x : cand)
            if (x >= 1 && x < n)
                rounds += contributes(x);

        cout << rounds << "\n";
    }
}
