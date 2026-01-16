#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // if n is even 1 to n gives sum and changing everthing wiht sum will make it easy to make 0s
    // if n is odd 1 to  n - 1 zeros as even and n - 1 and n two time as evens
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n % 2 == 0) {
        cout << 2 << endl;
        cout << "1 "<< n << endl;
        cout << "1 "<< n << endl;
    }
    else {
        cout << 4 << endl;
        cout << "1 " << n - 1 << endl;
        cout << "1 " << n - 1 << endl;
        cout << n - 1 << " " <<  n << endl;
        cout << n - 1 << " " <<  n << endl;
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