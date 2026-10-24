#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, coun=0; cin>>n;
    char prev, curr;
    cin >> prev;
    for (int i=1; i<n; i++) {
        cin >> curr;
        if (prev == curr) {coun++;}
        prev =curr;
    }
    cout << coun;
}