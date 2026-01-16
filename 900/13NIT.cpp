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
    int c = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) c++;
    }
    if (c == n) {
        cout << 0 << endl;
        return;
    }
    c = 0;
    for (int i = 0;i < n; i++) {
        if (a[i] != 0) {
            int k = i + 1;
            while (k < n && a[k] != 0) {
                k++;
            }
            c++;
            i = k - 1;
            // if more than 1 seg of non zero elements ans is 2 else it is 1
            if (c > 1) {
                cout << 2 << endl;
                return;
            }
        }
    }
    cout << 1 << endl;
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