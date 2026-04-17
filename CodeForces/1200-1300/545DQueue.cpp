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

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int count = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= sum)
        {
            count++;
            sum += v[i];
        }
    }

    cout << count;
}