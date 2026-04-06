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
    string n, n2;
    cin >> n >> n2;

    for (int i = 0; i < n.length(); i++)
    {
        if (toupper(n[i]) > toupper(n2[i]))
        {
            cout << 1;
            return 0;
        }
        else if (toupper(n[i]) < toupper(n2[i]))
        {
            cout << -1;
            return 0;
        }
    }

    cout << 0;
}