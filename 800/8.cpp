#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n, k;
    cin >> n >> k;
    int a[n];
    ll c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (k == a[i]) {
            c++;
        }
    }
    if(c) cout<<"Yes\n";
    else cout << "No\n";
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