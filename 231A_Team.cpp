#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ttl=0, p,v,t;
    cin >> n;
    for (int i=0; i<n; i++) {
        int tl=0;
        cin>>p>>v>>t;
        tl=p+=v+=t;
        if (tl < 2) continue;
        else ttl++;
    }
    cout << ttl;
    return 0;
}