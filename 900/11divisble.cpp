#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    // just handle 1 case by making it 2
    // increase a[i+1] by 1 alywas
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) {
            a[i]++;
        }
    }
    for(int i = 0 ; i < n - 1; i++) {
        if(a[i + 1] % a[i] == 0) {
            a[i + 1]++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

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