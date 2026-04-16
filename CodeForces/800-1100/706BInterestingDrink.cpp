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

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;

        int count = upper_bound(v.begin(), v.end(), a) - v.begin();

        cout << "\n"
             << count;
    }
}