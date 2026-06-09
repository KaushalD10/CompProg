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

    vector<long long> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    if (total % 3 != 0) {
        cout << 0;
        return 0;
    }

    long long target = total / 3;
    long long pref = 0;
    long long firstCuts = 0;
    long long ans = 0;

    for (int i = 0; i < n - 1; i++) {
        pref += a[i];

        if (pref == 2 * target) {
            ans += firstCuts;
        }

        if (pref == target) {
            firstCuts++;
        }
    }

    cout << ans;
}