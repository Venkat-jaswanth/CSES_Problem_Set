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



void solve()
{
    // Your solution logic here
    string dna;
    cin >> dna;
    int max_count = 1, current_count = 1;
    for (size_t i = 1; i < dna.length(); i++)
    {
        if (dna[i] == dna[i - 1])
        {
            current_count++;
            max_count = max(max_count, current_count);
        }
        else
        {
            current_count = 1;
        }
    }
    cout << max_count << "\n";
    
}

int main()
{
    fastio;
    solve();
    return 0;
}

