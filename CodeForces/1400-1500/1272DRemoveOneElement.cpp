#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), left(n, 1), right(n, 1);

    for (int &x : a) cin >> x;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            left[i] = left[i - 1] + 1;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            right[i] = right[i + 1] + 1;
        }
    }

    int ans = 1;

    for (int i = 0; i < n; i++) {
        ans = max(ans, left[i]);
    }

    for (int i = 1; i + 1 < n; i++) {
        if (a[i - 1] < a[i + 1]) {
            ans = max(ans, left[i - 1] + right[i + 1]);
        }
    }

    cout << ans;
}