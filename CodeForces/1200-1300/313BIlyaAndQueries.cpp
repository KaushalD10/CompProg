#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    vector<int> pref(n, 0);

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1];
        if (s[i] == s[i - 1])
        {
            pref[i]++;
        }
    }

    int m;
    cin >> m;

    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r - 1] - pref[l - 1] << '\n';
    }

    return 0;
}