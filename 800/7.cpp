
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// as n.m <= 25 n doubles everytime if not found before 5 moves it will never be found
bool check(string x, string s) {
    if (s.size() > x.size())
        return false;
    for (int i = 0; i < x.size() - s.size() + 1; i++) {
        if (x.substr(i, s.size()) == s) {
            return 1;
        }
    }
    return 0;
}
void solve() {
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x;
    cin >> s;
    string x1 = x + x;
    string x2 = x1 + x1;
    string x3 = x2 + x2;
    string x4 = x3 + x3;
    string x5 = x4 + x4;
    int ans = -1;
    if (check(x, s)) {
        ans = 0;
    }
    else if (check(x1, s)) {
        ans = 1;
    }
    else if (check(x2, s)) {
        ans = 2;
    }
    else if (check(x3, s)) {
        ans = 3;
    }
    else if (check(x4, s)) {
        ans = 4;
    }
    else if (check(x5, s)) {
        ans = 5;
    }
    if (ans != -1)cout << ans << endl;
    else cout << ans << endl;


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