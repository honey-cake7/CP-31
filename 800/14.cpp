+#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(c % 2 == 0){
        if(a > b){
            cout<<"First\n";
        }
        else {
            cout<<"Second\n";
        }
    }
    else {
        if(a >= b){
            cout<<"First\n";
        }
        else {
            cout<<"Second\n";
        }
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