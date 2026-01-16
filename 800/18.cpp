#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int x, k;
    cin >> x >> k;
    if (x % k != 0 || x < k) {
        cout << 1 << endl << x <<endl;
    }
    else {
        cout << 2 << endl;
        cout << x - 1 << " " << 1 << endl;
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