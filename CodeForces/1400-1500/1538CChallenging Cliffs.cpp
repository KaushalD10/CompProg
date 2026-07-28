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

        vector<int> a(n);

        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int pos = 0;
        int best = INT_MAX;

        for (int i = 0; i + 1 < n; i++) {
            int diff = a[i + 1] - a[i];

            if (diff < best) {
                best = diff;
                pos = i;
            }
        }

        for (int i = pos + 1; i < n; i++) {
            cout << a[i] << " ";
        }

        for (int i = 0; i <= pos; i++) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }
}