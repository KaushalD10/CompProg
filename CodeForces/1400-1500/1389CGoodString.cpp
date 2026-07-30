#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.size();
        int best = 0;

        for (char a = '0'; a <= '9'; a++) {
            for (char b = '0'; b <= '9'; b++) {
                int len = 0;
                char need = a;

                for (char c : s) {
                    if (c == need) {
                        len++;
                        need = (need == a ? b : a);
                    }
                }

                if (a != b && len % 2 == 1) {
                    len--;
                }

                best = max(best, len);
            }
        }

        cout << n - best << '\n';
    }

    return 0;
}