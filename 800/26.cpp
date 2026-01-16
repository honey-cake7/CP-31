#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool flag = 0;
    for(int i = 0; i < n ; i++){
        for(int j = i + 1; j < n ;j++){
            if(__gcd(a[i],a[j]) <= 2) {
                flag = 1;
                break;
            }   
        }
        if(flag) break;
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";

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