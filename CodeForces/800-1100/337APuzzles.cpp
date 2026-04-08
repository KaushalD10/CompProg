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

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++)
    {
        ans = min(ans, a[i + n - 1] - a[i]);
    }

    cout << ans;
}