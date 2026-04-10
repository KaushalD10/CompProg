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
    int n, total = 0, reverseTotal = 0;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);

        total += a;
    }

    sort(v.rbegin(), v.rend());

    int count = 0;

    for (int a : v)
    {
        reverseTotal += a;
        count++;
        if (reverseTotal > (total - reverseTotal))
        {
            cout << count;
            return 0;
        }
    }

    cout << count;
}