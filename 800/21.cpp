#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    int a[n];
    int c1 = 0;
    bool flag = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0){
            c1++;
            ans = max(ans,c1);
        }
        else{
            c1 = 0;
        }
    }
    cout<<ans<<endl;
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