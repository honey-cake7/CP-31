#include <bits/stdc++.h>
using namespace std;
#define ll long long
// if n < 10 n is ans
// then 10 20 30 40 50---100 200 300 --- 1000 --- 10000 -- 100000
// for this first box add 10 int s(start) after once reached 100 multiply by 10by10 add 100s  
void solve() {
    int n;
    cin >> n;
    if(n < 10) {
        cout << n << endl;
        return;
    }
    int ten = 10;
    int s = 10;
    int ans = 10;
    while(s + ten <= n) {
        s += ten;
        ans++;
        if(s == 100 || s == 1000 || s == 10000 || s == 100000 ){
            ten *= 10;
        }
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