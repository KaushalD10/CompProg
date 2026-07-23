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
        int total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total ^= a[i];
        }

        bool ok = false;

        if (total == 0) {
            ok = true;
        } else {
            int cur = 0;
            int parts = 0;

            for (int i = 0; i < n; i++) {
                cur ^= a[i];

                if (cur == total) {
                    parts++;
                    cur = 0;
                }
            }

            if (parts >= 3) {
                ok = true;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
        
    }

    return 0;
}=