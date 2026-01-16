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
    ll k = n;
    // find the digits and count the minimum possible steps to get 25 75 50 00
    vector<int> a;
    while (k > 0) {
        int m = k % 10;
        a.push_back(m);
        k /= 10;
    }
    reverse(a.begin(), a.end());
    n = a.size();
    int ans = n;
    for (int i = 0;i < a.size();i++) {
        int c = 0;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] == 2 && a[j] == 5) {
                c = (n - 1 - j) + j - i - 1;
                ans = min(ans, c);
            }
            if (a[i] == 7 && a[j] == 5) {
                c = (n - 1 - j) + j - i - 1;
                ans = min(ans, c);
            }
            if (a[i] == 5 && a[j] == 0) {
                c = (n - 1 - j) + j - i - 1;
                ans = min(ans, c);
            }
            if (a[i] == 0 && a[j] == 0) {
                c = (n - 1 - j) + j - i - 1;
                ans = min(ans, c);
            }

        }
    }
    cout << max(ans, 0) << endl;

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