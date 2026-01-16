#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    int a[n];
    int c = 0;
    int mi = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mi = min(mi , abs(a[i]));
    }
    cout<<mi<<endl;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}