#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    string s, f;
    cin >> s;
    f = s;
    if (isupper(s.front())) {
        cout << s;
        return 0;
    } else {
        s = toupper(s.front());
        cout << s << f.substr(1);
        return 0;
    }
}