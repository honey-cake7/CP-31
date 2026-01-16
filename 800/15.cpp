#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int ce = 0;
    int co = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            ce++;
        }
        else
            co++;
    }
    if (co % 2 == 0) {
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