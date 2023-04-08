#include<bits/stdc++.h>
using namespace std; 

int cntb(string s) {
    int sz = s.size();
    int ans = 0;
    for (int i = 0; i < sz; i++) {
        if (s[i] == 'B') ans++;
    }
    return ans % 2;
}

pair<int, char> slv(string s) {
    stack<char> q;
    int sz = s.size();
    for (int i = 0; i < sz; i++) {
        if (s[i] == 'B') continue;
        if (!q.empty() && q.top() == s[i]) {
            q.pop();
        } else {
            q.push(s[i]);
        }
    }
    if (q.empty()) {
        return make_pair(0, 'a');
    } else {
        return (make_pair(q.size(), q.top()));
    }
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    if (cntb(s1) != cntb(s2)) {
        cout << "NO\n";
        return;
    }
    if (slv(s1) != slv(s2)) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}