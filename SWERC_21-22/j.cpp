#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    if (x > y) swap(x, y);
    while (x) {
        int temp = y % x;
        y = x;
        x = temp;
    }
    return y;
}

void solve() {
    int w, l;
    cin >> w >> l;
    vector<int> a(3);
    a[0] = gcd(w, l - 2);
    a[1] = gcd(w - 1, l - 1);
    a[2] = gcd(w - 2, l);  

    set<int> ans;
    ans.insert(1);
    ans.insert(2);

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j * j <= a[i]; j++) {
            if (a[i] % j == 0) {
                ans.insert(j);
                ans.insert(a[i] / j);
            }
        }
    }
    cout << ans.size() << ' ';
    for (int x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}