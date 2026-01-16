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
    ll a, b;
    cin >> a >> b;
    // 10 7 +1 1
    // 9 6 +1 3
    // 8 5    1
    // 7 4 -1
    // 6 3 -1 3
    // So the max GCD will always be the a - b as it increases by one
    // if the are same then gcd can be made infinite
    if (a - b == 0) {
        cout << 0 << " " << 0 << endl;
        return;
    }
    ll gc;
    ll moves;
    if (a > b)
        gc = a - b;
    else
        gc = b - a;
    // 8 ko 6 bhi bana sakte hai aur 9 bhi remember this
    moves = min(b % gc, gc - b % gc);
    cout << gc << " " << moves << endl;


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