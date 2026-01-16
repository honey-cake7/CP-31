#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    // find longest continous substring of same character
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 1;
    int c2 = 0;
    int longest = -1;
    for(int i = 1; i < n ; i++){
        if(s[i] == s[i-1]) {
            c++;
        }
        else {
            longest = max(longest,c);
            c = 1;
        }
    }
    longest = max(longest,c);
    cout << longest + 1 << endl;
    

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