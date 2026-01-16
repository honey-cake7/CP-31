#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // sort and check the longest possible subarray which satisfies the condition and ans is n - longest
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0;i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int  c = 1;
    int longest = 1;
    for (int i = 0;i < n - 1; i++) {
        if (a[i + 1] - a[i] <= k) {
            c++;
        }
        else {
            c = 1;
        }
        longest = max(c, longest);
    }
    cout << n - longest << endl;

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