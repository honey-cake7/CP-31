#include <bits/stdc++.h>
using namespace std;
#define ll long long
// if there continous empty spaces then ans is always true to fill up the remaining spaces as the centre one will regenrate 
void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.') {
            flag = 1;
            break;
        }
        else if (s[i] == '.') {
            c++;
        }
    }
    if (flag) cout << 2 << endl;
    else cout << c << endl;
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