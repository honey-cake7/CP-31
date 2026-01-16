#include <bits/stdc++.h>
using namespace std;
#define ll long long
// the question was all about the first element as we were not able to swap it else it is just sorting
void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (arr[0] == 1) cout << "Yes\n";
    else cout << "No\n";
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