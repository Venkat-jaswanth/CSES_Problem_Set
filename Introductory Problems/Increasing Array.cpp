#include <bits/stdc++.h>
using namespace std;

// Macros for code blocks and expressions
#define fastio                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define sz(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define loop(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
#define each(x, a) for (auto &x : a)

// Type aliases using 'using'
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;

void solve(int t)
{
    // Your solution logic here
    vi arr;
    int first, res=0;
    cin >> first;
    arr.pb(first);
    rep(i,1,t){
        int n;
        cin >> n;
        first = max(first,n);
        res += first - n;
        arr.pb(first);
    }
    cout << res << "\n";
    each(x,arr) cout << x << " ";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    solve(t);
    return 0;
}