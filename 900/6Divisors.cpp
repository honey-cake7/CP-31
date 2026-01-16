#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // if [l,r] divides n
    // then [1,r-l+1] divides n
    // as 1 will divide l 2 will either divide l or l + 1 if yes than it will divide n also 3 also same l or l+1 or l+3 as reaminders are(0,1,2) cylic

    ll n;
    cin >> n;
    ll i = 1;
    while(n%i == 0) {
        i++;
    }
    cout << i - 1 << endl;
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