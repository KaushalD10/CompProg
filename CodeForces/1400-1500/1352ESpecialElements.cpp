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

        vector<int> a(n);
        vector<int> freq(n + 1, 0);

        for (int &x : a) {
            cin >> x;
            freq[x]++;
        }

        vector<bool> special(n + 1, false);

        for (int l = 0; l < n; l++) {
            int sum = 0;

            for (int r = l; r < n; r++) {
                sum += a[r];

                if (sum > n) break;

                if (r - l + 1 >= 2) {
                    special[sum] = true;
                }
            }
        }

        int ans = 0;

        for (int x = 1; x <= n; x++) {
            if (special[x]) {
                ans += freq[x];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}