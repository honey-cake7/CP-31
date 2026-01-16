#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    int a[n];
    // ai ^ x ^ a2 ^ x = a1^a2 ^ x^x
    // if n is even x even no. of times the x^ is 0 and k should be 0
    // if odd then X^ is x so to make it zero k should be x
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = a[0];
    for (int i = 1; i < n; i++) {
        k ^= a[i];
    }
    if (n % 2 == 0 && k == 0) {
        cout << 0 << endl;
    }
    else if (n % 2 == 1) {
        cout << k << endl;
    }
    else {
        cout << -1 << endl;
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