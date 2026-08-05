#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        string ans;

        if (b == 0) {
            if (a > 0)
                ans = string(a + 1, '0');
            else
                ans = string(c + 1, '1');
        } else {
            ans += string(a + 1, '0');

            ans += string(c + 1, '1');

            for (int i = 0; i < b - 1; i++) {
                ans += (ans.back() == '0' ? '1' : '0');
            }
        }

        cout << ans << '\n';
    }
}