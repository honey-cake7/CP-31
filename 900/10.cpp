#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {

    /// easy question related to implementation
    ll n, q;
    cin >> n >> q;
    ll a[n];
    ll s = 0;
    for(int i = 0; i < n; i++) {
        cin >>  a[i];
        s += a[i];
    }
    vector<ll> p(n + 1,0);
    for(int i =1; i <= n; i++){
        p[i] = p[i - 1] + a[i - 1];
    }
    while(q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        s = p[n];
        ll s1 = p[r] - p[l - 1];
        s = s - s1;
        s = s + (r - l + 1)*k;
        if(s % 2 == 1) {
            cout << "Yes\n";
        } 
        else {
            cout << "No\n";
        }
    }
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