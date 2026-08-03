#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = m;

    for (int i = 0; i < n; i++) {
        int shift = (b[i] - a[0] + m) % m;
        vector<int> transformed(n);

        for (int j = 0; j < n; j++) {
            transformed[j] = (a[j] + shift) % m;
        }

        sort(transformed.begin(), transformed.end());

        if (transformed == b) {
            ans = min(ans, shift);
        }
    }

    cout << ans;
}