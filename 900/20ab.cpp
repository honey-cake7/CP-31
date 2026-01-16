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
    // last and first elements must me same all other cases will be handeled on its own
    int n = s.size();
    int ab = 0;
    int ba = 0;
    if (n == 1) {
        cout << s << endl;
        return;
    }
    for (int i = 0;i < n - 1;i++) {
        if (s[i] == 'a' && s[i + 1] == 'b') {
            ab++;
        }
        if (s[i] == 'b' && s[i + 1] == 'a') {
            ba++;
        }
    }
    if (ab == ba) {
        cout << s << endl;
        return;
    }
    if (s[0] != s[n - 1]) {
        if (s[0] == 'a') {
            s[0] = 'b';
        }
        else {
            s[0] = 'a';
        }
    }
    cout << s << endl;




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