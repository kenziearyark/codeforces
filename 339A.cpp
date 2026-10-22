#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    bool done=0;

    int num[7] = {0}; // How many times appears
    for (int i=0; i<s.length(); i++) {
        num[abs(s[i]-'1')]++;
    }

    if (num[0] >= 1) {
        for (int i=0; i<num[0]; i++) {
            if (done==1) {cout << '+';}
            cout << '1';
            done=1;
        }
    }
    
    if (num[1] >= 1) {
        for (int i=0; i<num[1]; i++) {
            if (done==1) {cout << '+';}
            cout << '2';
            done=1;
        }
    }

    if (num[2] >= 1) {
        for (int i=0; i<num[2]; i++) {
            if (done==1) {cout << '+';}
            cout << '3';
            done=1;
        }
    }
    return 0;
}