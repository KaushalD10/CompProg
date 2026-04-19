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

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<long long, long long> freq;
    long long ans = 0;

    for (long long x : a)
    {
        for (int p = 0; p <= 31; p++)
        {
            long long target = 1LL << p;
            long long need = target - x;
            ans += freq[need];
        }
        freq[x]++;
    }

    cout << ans;
}