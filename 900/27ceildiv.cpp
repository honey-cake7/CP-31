#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vin(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void vout(vector<int>& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    // s is smallest possible by adding all elements
    // k is largest by taking it each element as ceiling pushes 1.2 to 2 so it adds greater
    ll s = 0;
    ll k = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        k += (a[i] + x - 1) / x;
    }
    cout << (s + x - 1) / x << " " << k << endl;

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