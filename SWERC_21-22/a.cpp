#include<bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> ma(10, -1);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int b, d;
        cin >> b >> d;
        d--;
        ma[d] = max(ma[d], b);
    }

    int ans = 0;
    for (int i = 0; i < 10; i++) {
        if (ma[i] == -1) {
            cout << "MOREPROBLEMS\n";
            return;
        }
        ans += ma[i];
    }
    cout << ans << '\n';
    return;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}