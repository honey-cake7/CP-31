#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // where to go and its Gcd of all;
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n; i++) {
        cin >> a[i];
    }
    int k = abs(a[0] - 1);
    for(int i = 1; i < n; i++) {
        k = __gcd(k,abs(a[i]-i-1));
    }
    cout << k <<  endl;
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