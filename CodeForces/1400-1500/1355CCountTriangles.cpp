#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mx = max(b + c, d + 1);
    vector<long long> cnt(mx + 2, 0);

    for (int x = a; x <= b; x++) {
        cnt[x + b]++;
        cnt[x + c + 1]--;
    }

    for (int x = c; x <= d; x++) {
        cnt[x + 1]--;
        cnt[x + a]++;
    }

    for (int i = 1; i <= mx; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = mx - 1; i >= 0; i--) {
        cnt[i] += cnt[i + 1];
    }

    long long ans = 0;

    for (int z = c; z <= d; z++) {
        ans += cnt[z + 1];
    }
    

    cout << ans << '\n';
}