
#include <bits/stdc++.h>
using namespace std;
#define ll long long
// if uniq elements greater than or equal to 3 than not possible at all
// if 1 uniq element than yes
// if 2 than placing a b a b a b a b 
// for every a there should be b for even elements
// for odd the abs diff should be 1
// i.e. a b a b a is possible  
// count freq of elemen
void solve() {
    ll n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[a[i]]++;
    if (freq.size() >= 3) {
        cout << "No\n";
        return;
    }
    else {
        int freq1 = freq.begin()->second;
        int freq2 = freq.rbegin()->second;
        if (freq1 == freq2 || (n % 2 == 1 && abs(freq1 - freq2) == 1)) {
            cout << "Yes\n";
            return;
        }
        else {
            cout << "No\n";
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