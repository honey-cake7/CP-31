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
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return;
    }
    int k = n;
    int c3 = 0;
    // count the number of factors of 3 
    while (k > 0 && k % 3 == 0) {
        k /= 3;
        c3++;
    }
    // count the number of factors of 2
    int m = k;
    int c2 = 0;
    while (m > 0 && m % 2 == 0) {
        m /= 2;
        c2++;
    }
    // if any else factor is possible we cannot make it 1 as we can only divide by 6 which is 3 * 2 of 3^x * 2*x
    if (m > 1) {
        cout << -1 << endl;
    }
    else {
        if (c2 > c3) { // if 3s are less then we cant achieve as 3 cant be increased
            cout << -1 << endl;
        }
        else { // else we will make 3 and 2 equal and divide by 6 till 1 2*c3 is for multiplying extra2s if required and division by 6 and -c2 is for the already present 2s which we dont need to apply
            cout << 2 * c3 - c2 << endl;
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