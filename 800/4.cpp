#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    // if n remainder 1 or 2 the first wins else second
    if (n % 3 == 1 || n % 3 == 2) {
        cout << "First\n";
    }
    else cout << "Second\n";

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
