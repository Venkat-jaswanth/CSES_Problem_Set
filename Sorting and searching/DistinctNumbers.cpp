#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    vector<ll> arr(t); 

    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    auto it = unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());

    cout << arr.size();
    return 0;
}
