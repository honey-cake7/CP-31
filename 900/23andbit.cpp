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
    int n;
    cin >> n;
    vector<int> a(n);
    int idx = 0;
    // find maxidx and go to its left and right to find the max and of it
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > a[idx]) {
            idx = i;
        }
    }
    int ans = a[idx];
    for(int i = idx;i >= 0;i--) {
        ans = min(ans,a[i] & ans);
    }
    for(int i = 0;i < n;i++) {
        ans = min(ans,a[i] & ans);
    }
    cout << ans << endl;
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