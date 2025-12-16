#include <bits/stdc++.h>

using namespace std;

struct SegTree {
    int n;
    vector<int> tree;

    SegTree(int n) : n(n), tree(2 * n, 0) {}

    int merge(int a, int b) {
        return max(a, b);
    }

    void build(const vector<int>& a) {
        for (int i = 0; i < n; i++)
            tree[n + i] = a[i];
        for (int i = n - 1; i > 0; i--)
            tree[i] = merge(tree[i << 1], tree[i << 1 | 1]);
    }

    // point update
    void update(int idx, int val) {
        idx += n;
        tree[idx] = val;
        while (idx > 1) {
            idx >>= 1;
            tree[idx] = merge(tree[idx << 1], tree[idx << 1 | 1]);
        }
    }

    // range maximum query
    int query(int l, int r) {
        int res = 0;
        for (l += n, r += n; l <= r; l >>= 1, r >>= 1) {
            if (l & 1) res = merge(res, tree[l++]);
            if (!(r & 1)) res = merge(res, tree[r--]);
        }
        return res;
    }

    int getMax() {
        return tree[1];
    }
};

int main() {
    int x, n;
    cin >> x >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    vector<int> coords = p;
    coords.push_back(0);
    coords.push_back(x);
    sort(coords.begin(), coords.end());
    coords.erase(unique(coords.begin(), coords.end()), coords.end());

    int m = coords.size();
    SegTree st(m);

    vector<int> init(m, 0);
    for (int i = 1; i < m; i++) {
        init[i] = coords[i] - coords[i - 1];
    }
    st.build(init);

    set<int> active;
    active.insert(0);
    active.insert(x);

    for (int pos : p) {
        auto it = active.upper_bound(pos);
        int right = *it;
        int left = *prev(it);

        int idx_left = lower_bound(coords.begin(), coords.end(), left) - coords.begin();
        int idx_pos  = lower_bound(coords.begin(), coords.end(), pos) - coords.begin();
        int idx_right= lower_bound(coords.begin(), coords.end(), right) - coords.begin();

        st.update(idx_right, 0);
        st.update(idx_pos, pos - left);
        st.update(idx_right, right - pos);

        active.insert(pos);

        cout << st.getMax() << " ";
    }
}

