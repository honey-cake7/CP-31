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
    // 4x + 6 y = n
    ll n;
    cin >> n;
    ll mn = (n + 5)/6; // 6 6 6 6 2 or 6 6 6 6 4 we can make it n/6 + 1 if not properly divisible 6 6 6 4 4 
    ll mx = n / 4; // 4 4 4 4 2 we make 4 4 4 6 min buses
    // n odd or less 4
    if(n % 2 != 0 || n < 4) 
        cout << -1 << endl;
    else    
        cout << mn << " " << mx << endl;

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