#include <bits/stdc++.h>
using namespace std;
#define ll long long

// y = 0 when n is even and y = 1 and n - k is even then Yes else No
void solve() {
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0 || (n - k) % 2 == 0) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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