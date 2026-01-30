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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    // the k is from 2 to 5
    // the only one which can have to factors is 4
    // 2 3 5 are prime numbers
    // so extra case for 4
    vin(a, n);
    int p = INT_MAX;
    if (k == 4) {
        int c = 0;
        for (int i = 0;i < n; i++) {
            if (a[i] % 2 == 0) c++;
        }
        if (c >= 2) {
            p = 0;
        }
        else if (c == 1) {
            p = 1;
        }
        else { // c == 0
            p = 2;
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = a[i] % k;
        if (a[i] == 0) p = 0;
            p = min((k - a[i]), p);
    }
    cout << p << endl;



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