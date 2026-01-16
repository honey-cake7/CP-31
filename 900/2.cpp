#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c = 0;
    vector<int> a(26, 0);
    for (int i = 0; i < n; i++) {
        a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] % 2 == 1) {
            c++;
        }
    }
    if (k+1 < c) {
        cout << "No\n";
        
    }
    else {
            cout << "Yes\n";
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