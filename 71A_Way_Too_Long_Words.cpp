#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
 
    for (int i=0; i<t; i++) {
        string p; cin>>p;
        if (p.length() <= 10) cout << p << '\n';
        else cout<<p[0]<<p.length()-2<<p[p.length()-1] << '\n';
    }
    return 0;
}