#include <bits/stdc++.h>
using namespace std;

#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

// Function-like macros that cannot be replaced by 'using'
#define uniq(x) (x).erase(unique(all(x)), (x).end())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define mp make_pair

#define loop(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define rrep(i, a, b) for (int i = (a); i >= (b); i--)
#define each(x, a) for (auto &x : a)

// Using alias declarations for types (preferred over #define)
using ll = long long;
using si = set<int>;
using sll = set<long long>;
using mii = map<int, int>;
using mll = map<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;
using vpii = vector<pair<int, int>>;

void solve(vll a)
{
    ll sum = 0;
    int l = 0;
    int r = 0;
    ll max_ = INT_MIN;
    loop(i, a.size())
    {
        sum += a[i];
        max_ = max(max_, sum);
        if (sum < 0)
        {
            sum = 0;
            max_ = max(max_, sum);
        }
    }
    auto it = max_element(a.begin(), a.end());

    if (ll(*it) < 0)
    {
        cout << *it;
    }
    else
        cout << max_;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    vll arr(t);
    loop(i, t) cin >> arr[i];
    solve(arr);
    return 0;
}