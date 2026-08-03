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

        long long ans = 0;
        long long best;
        cin >> best;

        for (int i = 1; i < n; i++) {
            long long x;
            cin >> x;

            if ((x > 0) == (best > 0)) {
                best = max(best, x);
            } else {
                ans += best;
                best = x;
            }
        }

        ans += best;
        cout << ans << '\n';
    }

    return 0;
}