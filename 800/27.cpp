#include <bits/stdc++.h>
using namespace std;
#define ll long long

// the count twos and check if the same no. of two are remaining in front
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int c = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 2) c++;
    }
    int k = 0;
    bool flag = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 2) k++;
        if(2*k == c) {
            cout << i + 1 << endl;
            flag = 1;
            break;
        }
     }
    if(!flag) {
        cout << -1 << endl;
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