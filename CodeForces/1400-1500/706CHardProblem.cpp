#include <bits/stdc++.h>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<string> s(n), r(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        r[i] = s[i];
        reverse(r[i].begin(), r[i].end());
    }

    const long long INF = 4e18;

    vector<array<long long, 2>> dp(n, {INF, INF});

    dp[0][0] = 0;
    dp[0][1] = c[0];

    for (int i = 1; i < n; i++) {
        if (s[i] >= s[i - 1]) {
            dp[i][0] = min(dp[i][0], dp[i - 1][0]);
        }

        if (s[i] >= r[i - 1]) {
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
        }

        if (r[i] >= s[i - 1]) {
            dp[i][1] = min(dp[i][1], dp[i - 1][0] + c[i]);
        }

        if (r[i] >= r[i - 1]) {
            dp[i][1] = min(dp[i][1], dp[i - 1][1] + c[i]);
        }
    }

    long long ans = min(dp[n - 1][0], dp[n - 1][1]);

    cout << (ans >= INF ? -1 : ans);
}