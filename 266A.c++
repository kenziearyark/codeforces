#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, coun=0; cin>>n;
    char color[] = {};

    for (int i=0; i<n; i++) {
        cin >> color[i];
    }
    for (int i=1; i<n; i++) {
        if (color[i] == color[i-1]) {
            coun++;
        }
    }
    cout << coun;
}