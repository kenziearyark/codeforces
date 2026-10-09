#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, tx=0,ty=0,tz=0;
    cin>>n;
    vector<int> x(n), y(n), z(n);
 
    //input data
    for (int i=0; i<n; i++) {
        cin >> x[i] >> y[i] >> z[i];
    }
 
    // find the total x, y, z
    for(int j=0; j<n; j++) {
        tx+=x[j];
    }
    for(int b=0; b<n; b++) {
        ty+=y[b];
    }
    for(int c=0; c<n; c++) {
        tz+=z[c];
    }
 
    // if else
    if (tx != 0 || ty != 0 || tz != 0) {
        cout << "NO";
    } else {cout << "YES";}
 
    return 0;
}