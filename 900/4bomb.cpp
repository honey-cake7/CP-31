#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // it all depends on boundary b will go to 0 compulsary
    // you have to add something to whenever it is at 1 
    // you will add either xi seconds or ifxi + c > a then you will add a - c seconds to maximise a - c we can take c = 1;
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll ans = b - 1;
    for (int i = 0; i < n; i++) {
        ans += min(arr[i], a - 1);
    }
    ans += 1;
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