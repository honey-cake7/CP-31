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
    vin(a, n);
    int c = 0;
    bool flag = 1;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    for (int i = n - 1; i > 1;i--) {
        if (a[i] <= a[i - 1]) {
            while (a[i - 1] != 0 && a[i] <= a[i - 1]) {
                a[i - 1] /= 2;
                c++;
            }
            if (a[i - 1] == 0) {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0) {
        cout << -1 << endl;
        return;
    }
    while (a[0] >= a[1]) {
        if(a[0] == 0){
            c = -1;
            break;
        }
        a[0] /= 2;
        c++;
    }

    cout << c << endl;
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