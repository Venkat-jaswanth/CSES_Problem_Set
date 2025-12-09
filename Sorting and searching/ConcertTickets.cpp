// DSU

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> parent;

int find(int i) {

    if (i < 0) return -1; 
    
    if (parent[i] == i) return i;
    
    return parent[i] = find(parent[i]);
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    sort(h.begin(), h.end());

    parent.resize(n);
    for (int i = 0; i < n; i++) parent[i] = i;

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;

        auto it = upper_bound(h.begin(), h.end(), t);

        int initial_idx = distance(h.begin(), it) - 1;
        int available_idx = find(initial_idx);

        if (available_idx != -1) {
            
            cout << h[available_idx] << "\n";
            
            parent[available_idx] = find(available_idx - 1);
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}