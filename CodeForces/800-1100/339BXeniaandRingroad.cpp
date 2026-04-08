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
    long long n, m;
    cin >> n >> m;

    long long curr = 1;
    long long ans = 0;

    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;

        if (x >= curr)
            ans += x - curr;
        else
            ans += (n - curr) + x;

        curr = x;
    }

    cout << ans;
}