#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll MOD = 1e9+7;
ll power(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % MOD;

        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int main(){
    ll a;
    cin >> a;
    a = power(2,a);
    cout << a;
    return 0;
}