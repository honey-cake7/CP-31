#include <bits/stdc++.h>
using namespace std;
#define ll long long
int dx[] = {-1,1,-1,1} , dy[] = {-1,-1,1,1};
// find pos of king being attacked and pos of queen being attacked find intersection of both sets
void solve() {
    int a, b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    int c = 0;
    set<pair<int,int>> king,queen;
    for(int i = 0; i < 4; i++) {
        king.insert({xk + dx[i]*a,yk+dy[i]*b});
        king.insert({xk + dx[i]*b,yk+dy[i]*a});
        queen.insert({xq + dx[i]*a,yq+dy[i]*b});
        queen.insert({xq + dx[i]*b,yq+dy[i]*a});
    }
    for(auto pos: king) {
        if(queen.count(pos) == 1) {
            c++;
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