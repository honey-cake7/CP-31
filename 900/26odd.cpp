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
    ll n;
    cin >> n ;
    //  to check if powers of 2
    while(n % 2 != 1) {
        n /= 2;
    }
    if(n > 1) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO\n";
    


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