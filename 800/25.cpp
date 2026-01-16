#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    int i = 0;
    int j = n - 1;
    int d = 0;
    while(i<=j) {
       if(a[i] == a[j]){
        d = j - i +1;
        break;
       }
        i++;
        j--;
    }
    cout << d << endl;
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