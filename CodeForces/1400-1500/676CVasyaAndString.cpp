#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n >> k >> s;

    int ans = 0;

    for (char target : {'a', 'b'}) {
        int left = 0;
        int changes = 0;

        for (int right = 0; right < n; right++) {
            if (s[right] != target) {
                changes++;
            }

            while (changes > k) {
                if (s[left] != target) {
                    changes--;
                }
                left++;
            }

            ans = max(ans, right - left + 1);
        }
    }

    cout << ans;
}