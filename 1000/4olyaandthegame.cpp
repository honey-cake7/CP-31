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
    ll n;
    cin >> n;
    ll mn = INT_MAX;
    vector<ll> a;
    // all that mattered in this question was 1st and second element of each array we always have to consider the smallest first element of arrays
    // and discard the smallest second element of array by sending the smallest first element to that array it will be automatically not be considered
    // and sum of all the remaining seconds elements is the answer
    for (int i = 0;i < n;i++) {
        ll k;
        cin >> k;
        vector<ll> v(k);
        for (int i = 0;i < k; i++) {
            cin >> v[i];

        }
        sort(v.begin(),v.end());
        mn = min(mn,v[0]);
        a.push_back(v[1]);
    }
    sort(a.begin(),a.end());
    ll sm = mn;
    for(int i = 1;i < n; i++) {
        sm += a[i];
    }
    cout << sm << endl;

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