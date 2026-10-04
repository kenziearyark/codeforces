#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string p, q;
    cin >> p;
 
    if (p.front() <= 90 && p.front() >= 65) {
        cout << p;
        return 0;
    } else {
        cout << (char)(p.front() - 32) << p.substr(1);
        return 0;
    }
}