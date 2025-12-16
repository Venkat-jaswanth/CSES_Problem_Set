#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0)

using vi = vector<int>;
static const long long MOD = 1000000007;

void solve(vector<int>& arr) {
    unordered_map<int,int> freq;
    for (int x : arr) freq[x]++;

    long long ans = 1;
    for (auto &p : freq) {
        ans = (ans * (p.second + 1)) % MOD;
    }
    cout << (ans - 1 + MOD) % MOD;
}

int main()
{
    fastio;

    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    solve(arr);
    return 0;
}
