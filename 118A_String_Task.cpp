#include <iostream>
#include <string>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    char vowels[] = {'a', 'i', 'u', 'e', 'o', 'y'};
    string p;
    bool isVowel = false;
    string p1;
    cin >> p;
 
    for (int i = 0; i< p.length(); i++) {
        p[i] = tolower(p[i]);
    } 
 
    for (int j = 0; j < p.length(); j++) {
        isVowel = false;
        for (int k = 0; k < 6; k++) {
            if (p[j] == vowels[k]) {
                isVowel = true;
            }
        }
        if (isVowel == false) {
            cout << '.' << p[j];
        }
    } 
    return 0;
}