#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<int> pa(n + 1), pb(n + 1);
        for (int i = 0; i < n; i++) {
            pa[i + 1] = pa[i] + a[i];
            pb[i + 1] = pb[i] + b[i];
        }
        

        int ans = 0;
        while (true) {
            int m = n + ans;
            int take = m - m / 4;

            int mine;
            if (take <= ans) {
                mine = take * 100;
            } else {
                int need = take - ans;
                mine = ans * 100 + (pa[n] - pa[n - need]);
            }

            int opp = pb[n] - pb[max(0, n - min(n, take))];

            if (mine >= opp) break;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}