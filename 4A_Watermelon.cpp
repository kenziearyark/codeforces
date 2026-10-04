#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
 
    cin >> t;
 
    if (t % 2 == 0 && t > 2) cout << "YES";
    else cout << "NO";
     return 0;
}