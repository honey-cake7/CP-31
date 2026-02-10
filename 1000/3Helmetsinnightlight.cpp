#include <bits/stdc++.h>
using namespace std;
#define ll long long

void vin(vector<ll>& a, int n) {
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
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n);
    vector<ll> b(n);
    vin(a, n);
    vin(b, n);
    vector<pair<ll, ll>> mp(n);
    for (int i = 0; i < n; i++) {
        // create a map with b[i] as first
        mp[i] = { b[i],a[i] };
    }
    ll ans = p; // give info to atleast one person
    ll rem = n - 1;
    sort(mp.begin(), mp.end()); // sort to get everything less than p at top
    for (auto it : mp) {
        ll c = it.first;
        ll k = it.second;
        if (c < p) {
            if (k < rem) { // if rem are more that people to tell 
                ans += k * c;
                rem -= k;
            }
            else { // else all remaining at same cost
                ans += rem * c;
                rem -= rem;
            }
        }
        else { // is cost is more that all below will also be more so break
            break;
        }
    }
    if (rem > 0) { // all rem will be given p amount
        ans += rem * p;
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