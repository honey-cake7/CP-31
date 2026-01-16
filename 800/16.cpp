#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int d = 0;
    int mind = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) {
            d = a[i + 1] - a[i];
            mind = min(d, mind);
        }
        else {
            cout << "0\n";
            return;
        }
    }
    if (mind == 0) {
        cout << 1 << endl;
        return;
    }

    cout << mind / 2 + 1 << endl;


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