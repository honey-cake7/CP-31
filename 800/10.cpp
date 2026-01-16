#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    char a[10][10];
    int c = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'X') {
                if (i == 0 || j == 9 || (i == 9 || j == 0))
                    c += 1;
                else if (i == 1 || j == 8 || (i == 8 || j == 1))
                    c += 2;
                else if ((i == 2 || j == 7) || (i == 7 || j == 2))
                    c += 3;
                else if ((i == 3 || j == 6) || (i == 6 || j == 3))
                    c += 4;
                else if ((i == 4 || j == 5) || (i == 5 || j == 4))
                    c += 5;
            }
        }
    }
    cout << c << endl;
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