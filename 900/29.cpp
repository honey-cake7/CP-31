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
    ll n;
    cin >> n;
    vector<int> a(n);
    // basic implementation problem
    vin(a, n);
    for (int i = 1; i < n - 1; i++) {
        int x = a[i];
        int ri = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] < x) {
                ri = j;
                break;
            }
        }
        int li = -1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < x) {
                li = j;
                break;
            }
        }
        if (li != -1 && ri != -1) {
            cout << "YES" << endl;
            cout << ri + 1 << " " << i + 1 << " " << li + 1 << endl;
            return;
        }
    }
    cout << "NO\n";



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