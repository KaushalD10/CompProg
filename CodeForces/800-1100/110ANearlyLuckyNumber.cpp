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
    string n;
    cin >> n;

    int count = 0;

    for (char c : n)
    {
        if (c == '4' || c == '7')
        {
            count++;
        }
    }

    if (count == 7 || count == 4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}