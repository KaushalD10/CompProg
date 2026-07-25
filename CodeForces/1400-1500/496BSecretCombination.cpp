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

    int n;
    string s;
    cin >> n >> s;

    string ans = s;

    for (int shift = 0; shift < n; shift++) {
        string cur = s.substr(shift) + s.substr(0, shift);

        int add = (10 - (cur[0] - '0')) % 10;

        for (char &c : cur) {
            c = char('0' + ((c - '0' + add) % 10));
        }

        ans = min(ans, cur);
    }

    cout << ans << '\n';
    return 0;
}