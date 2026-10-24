#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float pos;
    int ele=0,calc=0; cin>>pos;

    if (pos>=5) {
        cout << ceil(pos/5);
    } else {
        cout << 1;
    }
}