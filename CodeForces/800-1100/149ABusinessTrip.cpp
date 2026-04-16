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
    int k;
    cin >> k;
    vector<int> v;

    if (k == 0)
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < 12; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }

    int count = 0, sum = 0;

    sort(v.rbegin(), v.rend());

    for (int i : v)
    {
        if (sum < k)
        {
            sum += i;
            count++;
        }
    }

    if (sum >= k)
    {
        cout << count;
    }

    else
    {
        cout << -1;
    }
}