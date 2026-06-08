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

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> diff(n + 2, 0);

    while (q--) {
        int l, r;
        cin >> l >> r;

        diff[l]++;
        diff[r + 1]--;
    }

    vector<long long> freq(n);
    long long curr = 0;

    for (int i = 1; i <= n; i++) {
        curr += diff[i];
        freq[i - 1] = curr;
    }

    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += a[i] * freq[i];
    }

    cout << ans;
}