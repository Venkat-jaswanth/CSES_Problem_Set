#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

#define loop(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define rrep(i,a,b) for(int i=(a); i>=(b); i--)
#define each(x,a) for (auto &x : a)

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


void solve(vector<pair<ll,ll>> arr, int t) {
    int cnt = 0;
    int max_ = 0;
    sort(arr.begin() , arr.end());
    // loop(i,2*t) cout << arr[i].first << " " << arr[i].second << endl;;
    for(int i =0 ; i <2*t ; i++){
        cnt += arr[i].second;
        max_ = max(cnt,max_);
    }
    cout << max_;
}

int main() {
    fastio;
    int t;
    cin >> t;
    vector<pair<ll,ll>> arr(2*t);
    int i = 0;
    int a = t;
    while(a--){
        cin >> arr[i].first;
        arr[i].second = 1;
        i++;
        cin >> arr[i].first;
        arr[i].second = -1;
        i++;
    }
    solve(arr,t);
    return 0;
}