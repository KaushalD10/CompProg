#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> x(n), h(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> h[i];
    }

    if (n == 1) {
        cout << 1;
        return 0;
    }

    int ans = 2;
    long long last = x[0];

    for (int i = 1; i < n - 1; i++) {
        if (x[i] - h[i] > last) {
            ans++;
            last = x[i];
        } else if (x[i] + h[i] < x[i + 1]) {
            ans++;
            last = x[i] + h[i];
        } else {
            last = x[i];
        }
    }

    cout << ans;
    return 0;
}