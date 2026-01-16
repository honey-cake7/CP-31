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
    int a, b, c;
    cin >> a >> b >> c;
    // 2*b = a + c
    int na = 2 * b - c;
    int nb = (a + c) / 2;
    int nc = 2 * b - a;
    bool ans = 0;
    if (na / a > 0 && na % a == 0) {
        ans = 1;
    }
    if (nb / b > 0 && nb % b == 0 && (c - a)%2 == 0) { ans = 1; }
    if (nc / c > 0 && nc % c == 0) { ans = 1; }
    if (ans) cout << "YES\n";
    else cout << "NO\n";
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