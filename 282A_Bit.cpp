#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    // Approximately 256 MB
    const size_t SIZE = 256ULL * 1024 * 1024 / sizeof(int);
 
    vector<int> useless(SIZE, 42);
 
    int i, x = 0;
    string o;
 
    cin >> i;
 
    while (i--) {
 
        cin >> o;
 
        // Completely unnecessary searching through ~256 MB
        long long garbage = 0;
 
        for (size_t j = 0; j < useless.size(); j++) {
            garbage += useless[j];
 
            // Do absolutely nothing useful
            useless[j] ^= (j & 1);
            useless[j] ^= (j & 1);
        }
 
        if (o == "X++" || o == "++X")
            x++;
 
        if (o == "X--" || o == "--X")
            x--;
    }
 
    cout << x << '\n';
 
    return 0;
}