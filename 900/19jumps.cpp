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
    ll x , n;
    cin >> x >> n;
    ll fi;
    if(n % 4 == 0) {
        fi = 0;
    }
    if(n% 4 == 1) {
        fi = -n;
    }
    if(n % 4 == 2) {
        fi = 1;
    }
    if(n % 4 == 3) {
        fi = n + 1;
    }
    if(x % 2 == 0) {
        fi = x + fi;
    }
    else{
        fi = x - fi;
    }
    cout << fi << endl;
    
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