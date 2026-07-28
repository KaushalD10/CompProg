#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++) {
        int x = s[i] - '0';

        if (x % 8 == 0) {
            cout << "YES\n";
            cout << x << '\n';
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int x = (s[i] - '0') * 10
                  + (s[j] - '0');

            if (x % 8 == 0) {
                cout << "YES\n";
                cout << x << '\n';
                return 0;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int x = (s[i] - '0') * 100
                      + (s[j] - '0') * 10
                      + (s[k] - '0');

                if (x % 8 == 0) {
                    cout << "YES\n";
                    cout << x << '\n';
                    return 0;
                }
            }
        }
    }

    cout << "NO\n";
    return 0;
}