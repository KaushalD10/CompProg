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

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long mn = v[0];
    long long mx = v[n - 1];
    long long diff = mx - mn;

    if (mn == mx)
    {
        cout << 0 << " " << 1LL * n * (n - 1) / 2;
        return 0;
    }

    long long cntMin = 0, cntMax = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == mn)
        {

            cntMin++;
        }
        if (v[i] == mx)
        {

            cntMax++;
        }
    }

    cout << diff << " " << cntMin * cntMax;
}