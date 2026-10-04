#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x=0;
    int n; cin>>n;
 
    for(int i=0; i<n; i++) {
        string op; cin >> op;
        if (op.contains("++")) x++;
        else if (op.contains("--")) x--;
    }
    cout << x;
    return 0;
}