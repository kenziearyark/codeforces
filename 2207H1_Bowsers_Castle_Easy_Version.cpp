#include <bits/stdc++.h>
using namespace std;
 
constexpr int LOW = 1;
constexpr int HIGH = 1000000000;
 
int readInt() {
    int x;
    if (!(cin >> x) || x == -1) exit(0);
    return x;
}
 
struct Node {
    int variable;  // Nonzero for a leaf.
    int left, right;
    bool isMax;
};
 
struct Solver {
    int n;
    vector<Node> tree;
 
    explicit Solver(int size) : n(size) {
        tree.reserve(2 * n - 1);
    }
 
    int ask(const vector<int>& a) const {
        cout << '?';
        for (int i = 1; i <= n; ++i) cout << ' ' << a[i];
        cout << endl;
        return readInt();
    }
 
    // Outside [l, r], base contains constants that isolate this subfunction.
    int build(int l, int r, vector<int> base) {
        if (l == r) {
            tree.push_back({l, -1, -1, false});
            return (int)tree.size() - 1;
        }
 
        vector<int> a = base;
        for (int i = l; i <= r; ++i) a[i] = i + 1;
        int p = ask(a) - 1;
 
        for (int i = l; i <= r; ++i) a[i] = n + 2 - i;
        int q = n + 2 - ask(a);
 
        bool isMax = p > q;
        int active = isMax ? HIGH : LOW;
        int neutral = isMax ? LOW : HIGH;
        int m = min(p, q);
 
        // Disable the first canonical child; locate a pivot in the second.
        for (int i = l; i <= r; ++i) {
            if (i <= m) a[i] = neutral;
            else a[i] = isMax ? n + 2 - i : i + 1;
        }
        int answer = ask(a);
        int k = isMax ? n + 2 - answer : answer - 1;
 
        // Only the first child can produce 'active' in this assignment.
        for (int i = l; i <= r; ++i)
            a[i] = (i < k ? active : neutral);
 
        int cut = -1;
        for (int i = l; i < k; ++i) {
            a[i] = neutral;
            if (ask(a) != active) {
                a[i] = active;
                cut = i;
            }
        }
 
        // 'cut' is the last variable of the first canonical child.
        for (int i = l; i <= r; ++i) base[i] = neutral;
        int left = build(l, cut, base);
        int right = build(cut + 1, r, base);
        tree.push_back({0, left, right, isMax});
        return (int)tree.size() - 1;
    }
 
    int evaluate(int id, const vector<int>& a) const {
        const Node& v = tree[id];
        if (v.variable != 0) return a[v.variable];
        int x = evaluate(v.left, a);
        int y = evaluate(v.right, a);
        return v.isMax ? max(x, y) : min(x, y);
    }
 
    void run() {
        int root = build(1, n, vector<int>(n + 1, LOW));
        cout << '!' << endl;
 
        while (true) {
            vector<int> a(n + 1);
            a[1] = readInt();
            if (a[1] == 0) break;
            for (int i = 2; i <= n; ++i) a[i] = readInt();
            cout << evaluate(root, a) << endl;
        }
    }
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = readInt();
    while (t--) {
        int n = readInt();
        Solver solver(n);
        solver.run();
    }
    return 0;
}