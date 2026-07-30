#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        vector<int> f;

        for (auto &[x, cnt] : freq) {
            f.push_back(cnt);
        }

        sort(f.begin(), f.end());

        int m = f.size();
        long long ans = n;
        long long prefix = 0;

        for (int i = 0; i < m; i++) {
            long long target = f[i];
            long long removeSmall = prefix;
            long long removeLarge = 0;

            for (int j = i; j < m; j++) {
                removeLarge += max(0LL, (long long)f[j] - target);
            }

            ans = min(ans, removeSmall + removeLarge);
            prefix += f[i];
        }

        cout << ans << '\n';
    }

    return 0;
}