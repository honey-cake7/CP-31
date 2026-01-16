#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "Yes\n" << n << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout<<endl;
    }
    else if (k == 2) {
        if (n % 2 == 0) {
            cout << "Yes\n" << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << 2 << " ";
            }
            cout<<endl;
        }
        else {
            cout << "No\n";
        }
    }
    else if(k == 1) {
        cout << "No\n";
    }
    else if(k >= 3){
        if (n % 2 == 0) {
            cout << "Yes\n" << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) {
                cout << 2 << " ";
            }
            cout<<endl;
        }
        else {
            cout << "Yes\n" << n / 2 << endl;
            for (int i = 0; i < (n - 3) / 2; i++) {
                cout << 2 << " ";
            }
            cout<<3;
            cout<<endl;
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