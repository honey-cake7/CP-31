#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    // we can only move left and diagonally
    // so we will first move diag and the towards left to get least 
    //calculate the vertical steps(y)
    int s = abs(b - d);
    // adjust x according to y
    a = a + s;
    // now if starting postion is below destinatio and the after getting diagnal postion check is dest is on the left
    if (b <= d && a >= c) {
        s += abs(a - c);
        cout << s << endl;
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