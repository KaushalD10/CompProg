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
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        pair<int, int> p;
        p.first = x;
        p.second = y;

        v.push_back(p);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            pair<int, int> p1 = v[j];
            pair<int, int> p2 = v[j + 1];

            if (p2.first < p1.first)
            {
                v[j] = p2;
                v[j + 1] = p1;
            }
        }
    }

    for (pair<int, int> p : v)
    {
        int x = p.first, y = p.second;

        if (s <= x)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s += y;
        }
    }

    cout << "YES";
}