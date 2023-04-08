#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int w = 0, r = 0;
    for (int i = 0; i < m; i++) {
        int ww, rr;
        cin >> rr >> ww;
        r = max(rr, r);
        w = max(ww, w);
    }
    if (w + r > n) {
        cout << "IMPOSSIBLE\n";
        return;
    }
    r = n - w;
    for (int i = 0; i < r; i++) {
        cout << "R";
    }
    for (int i = 0; i < w; i++) {
        cout << "W";
    }
    cout << '\n';
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}