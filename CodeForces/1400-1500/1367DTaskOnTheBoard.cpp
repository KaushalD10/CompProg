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

        int m;
        cin >> m;

        vector<int> b(m);
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
            

        vector<int> cnt(26, 0);
        for (char c : s){
            cnt[c - 'a']++;
        }
            

        string ans(m, '?');
        vector<int> done(m, 0);

        int cur = 25;

        while (true) {
            vector<int> pos;

            for (int i = 0; i < m; i++) {
                if (!done[i] && b[i] == 0)
                    pos.push_back(i);
            }

            if (pos.empty())
                break;

            while (cnt[cur] < (int)pos.size())
                cur--;

            for (int idx : pos) {
                ans[idx] = char('a' + cur);
                done[idx] = 1;
            }

            cnt[cur] -= pos.size();
            cur--;

            for (int i = 0; i < m; i++) {
                if (done[i])
                    continue;

                for (int idx : pos)
                    b[i] -= abs(i - idx);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}