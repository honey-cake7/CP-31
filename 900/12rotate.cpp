#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // first and last element difference
    int d = a[n - 1] - a[0];
    // adjacent elements diffrence as rotation of whole is possible
    for(int i = 0; i < n - 1; i++){
        d = max(a[i] - a[i+1],d);
    }
    // fixing a[n] and hampering others so calulate max of a[n] and all other elements
    for(int i = 0; i < n ; i++){
        d = max(a[n - 1] - a[i],d);
    }
    // fixing a[1] and doing same
    
    for(int i = 0; i < n ; i++){
        d = max(a[i] - a[0],d);
    }
    

    cout << d << endl;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}