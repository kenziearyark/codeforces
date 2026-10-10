#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string p1,p2;
    cin >> p1>>p2;

    // convert to lowercase
    string pl1,pl2;
    for (int i=0; i<p1.length(); i++) {
        char pp1 = tolower(p1[i]);
        pl1+=pp1;
    }
    for (int j=0; j<p2.length(); j++) {
        char pp2 = tolower(p2[j]);
        pl2+=pp2;
    }    

    bool flag=false;
    for (int i=0; i<p1.length(); i++) {
        if (pl1[i] != pl2[i] && pl1[i] < pl2[i]) {
            cout << "-1";
            flag = true;
            break;
        } else if (pl1[i] != pl2[i] && pl2[i] < pl1[i]) {
            cout << "1";
            flag = true;
            break;
        }
    }

    if (flag == false) {cout << 0;}
    
    return 0;
}
