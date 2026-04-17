#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<int> pref(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pref[i];
        if (i > 0)
            pref[i] += pref[i - 1];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int x;
        cin >> x;
        int pile = lower_bound(pref.begin(), pref.end(), x) - pref.begin();
        cout << pile + 1 << '\n';
    }

    return 0;
}