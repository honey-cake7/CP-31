#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // just check the upper and lower bound

    ll n,k,x;
    cin >> n >> k >> x;
    ll mi = (k*(k+1))/2;
    ll z = (n*(n + 1))/2;
    ll f = n - k;
    z = z - (f*(f+1))/2;
    if(x >= mi && x <= z) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

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