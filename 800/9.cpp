#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    int a[n - 1];
    ll c = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        c = c + a[i];
    }
    cout << -c << endl;

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