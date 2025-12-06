#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k;
    int n,m;
    cin >> n >> m >> k;
    vector<ll> a(n) , b(m);
    for(int i = 0; i<n; i++) cin>>a[i];
    for(int i = 0; i<m; i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt = 0;

    int ap = 0, bp = 0;
    while (ap<n){
        while(bp<m && b[bp] < a[ap]-k) bp++;
        if (bp < m && a[ap] - k <= b[bp] && b[bp] <= a[ap] + k){
            cnt++;
            ap++;
            bp++;
        }
        else{
            ap++;
        }
    }
    cout << cnt;
    return 0;
}