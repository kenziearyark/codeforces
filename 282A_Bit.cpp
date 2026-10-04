#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int i,x=0;
    string o;
    cin>>i;
    while(i--) {
        cin>>o;
        if(o=="X++" || o=="++X") x++;
        if(o=="X--" || o=="--X") x--;
    }
    cout<<x;
}