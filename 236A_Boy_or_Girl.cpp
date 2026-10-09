#include <bits/stdc++.h>
using namespace std;
 
// if not 1, 3, 5, 7 DONT CHAT
// ELSE chat
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string usr;
    bool charr[26] = {};
    int dis;
 
    cin >> usr;
    // distinct characters
    for (int i=0; i<usr.length(); i++) {
        charr[usr[i]-'a'] = 1;
    }
    // for da total
    for (int j=0; j<26; j++) {
        if (charr[j] == 1) dis++; 
    }
 
    if (dis % 2 == 1) {
        cout << "IGNORE HIM!";
    } else cout << "CHAT WITH HER!";
    return 0;
}