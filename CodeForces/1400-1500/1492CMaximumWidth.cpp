#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    vector<int> l(m), r(m);

    int p = 0;
    for (int i = 0; i < m; i++) {
        while (s[p] != t[i]) p++;
        l[i] = p++;
    }

    p = n - 1;
    for (int i = m - 1; i >= 0; i--) {
        while (s[p] != t[i]) p--;
        r[i] = p--;
    }

    int ans = 0;
    for (int i = 0; i + 1 < m; i++)
        ans = max(ans, r[i + 1] - l[i]);

    cout << ans << '\n';
    return 0;
}