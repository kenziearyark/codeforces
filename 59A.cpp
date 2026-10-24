#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int up=0, down=0;
    string word; cin>>word;
    
    // Word scanner
    for (int i=0; i<word.length(); i++) {
        if (word[i] >= 65 && word[i] <= 90) {
            up++;
        } else {down++;}
    } 
    if (up > down) {
        transform(word.begin(), word.end(), word.begin(), [](unsigned char c){
            return toupper(c);
        });
        cout << word;
    } else if (down > up) {
        transform(word.begin(), word.end(), word.begin(), [](unsigned char c){
            return tolower(c);
        });
        cout << word;
    } else {
        transform(word.begin(), word.end(), word.begin(), [](unsigned char c){
            return tolower(c);
        });
        cout << word;
    }


    return 0;
}