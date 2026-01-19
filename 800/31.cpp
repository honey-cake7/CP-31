#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    // longest common pre and suf are the array itself
    if (a == n && b == n) {
        cout << "Yes" << endl;
        return;
    }
    // from 1 to a we will keep same and from b to  n we will keep same and reverse the things in btween if there are less than two elements in the centre we cant reverse them so a + b + 2 <= n holds true than yes 
    if (a + b + 2 <= n) {
        cout << "Yes" << endl;
        return;
    }
    cout << "No\n";

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