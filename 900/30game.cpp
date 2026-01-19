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
    string s;
    cin >> s;
    int n = s.size();
    int c0 = 0;
    // count 1 and 0
    for (int i = 0;i < n;i++) {
        if (s[i] == '0') {
            c0++;
        }
    }
    int c1 = n - c0;
    // minimum opr is k
    int k = min(c1, c0);
    if (k % 2 == 0) {
        cout << "NET\n";
    }
    else {
        cout << "DA\n";
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