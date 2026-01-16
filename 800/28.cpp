#include <bits/stdc++.h>
using namespace std;
#define ll long long

// if we find all lements are same then we can say that there will never exist any array which can satisfy the condition but if there exuist different element we can just oput the max elem in front and print remaining increaseing array

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool flag = 1;
    for(int i = 1 ; i < n ;i++) {
        if(a[i-1] != a[i]){
            flag = false;
        }
    }
    if(flag) {
         cout << "No\n";
    } 
    // int mx = a[n-1];
    // int mi = a[0];
    // if(mx == mi) {
       
    // }
    else {
        cout << "Yes\n";
        cout << a[n - 1] << " ";
        for(int i = 0; i < n - 1; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
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