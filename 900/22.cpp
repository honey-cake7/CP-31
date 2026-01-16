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
    int n;
    cin >> n;
    vector<int> a(n);
    int s = 0;
    int one=0;
    int z = 0;
    // it only matters for zeros and ones
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        if(a[i] == 1) one++;
        if(a[i] == 0) z++;
    }
    ll k  = 1;
    // one is always takes but 1 at a time and 0 is yes or no 2 possiblity so
    while(z > 0) {
        k *= 2;
        z--;
    }
    cout << k *(one) << endl;
    
    

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