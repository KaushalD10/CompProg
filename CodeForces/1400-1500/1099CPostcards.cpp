#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    cin >> s >> k;

    int letters = 0;
    int modifiers = 0;
    bool hasStar = false;


    for(char c:s){
        if(c== '?' || c == '*'){
            modifiers++;
            if(c=='*'){
                hasStar = true;
            }
        }
    }

    int minLen = letters - modifiers;

    if (k < minLen || (k > letters && !hasStar)) {
        cout << "Impossible";
        return 0;
    }

    int needRemove = max(0, letters - k);
    int needAdd = max(0, k - letters);

    string ans;

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '?' || s[i] == '*') continue;

        bool hasModifier = (i + 1 < (int)s.size() && (s[i + 1] == '?' || s[i + 1] == '*'));

        if (hasModifier && needRemove > 0) {
            needRemove--;
            continue;
        }

        ans += s[i];

        if (i + 1 < (int)s.size() && s[i + 1] == '*' && needAdd > 0) {
            ans += string(needAdd, s[i]);
            needAdd = 0;
        }
    }

    cout << ans;
}