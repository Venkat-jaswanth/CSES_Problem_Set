#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a , b;
    cin >> a >> b;
    vector<ll> arr(a);
    for (int i = 0; i < a; i++) 
        cin >> arr[i];

    sort(arr.begin() , arr.end());
    int cnt = 0, l = 0;
    int r = a - 1;
    while (l <= r) {
        if (arr[l] + arr[r] <= b) l++;
        r--;
        cnt++;
    }
    cout << cnt;

    return 0;
}