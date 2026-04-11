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

    int len = n.length();

    if (len % 2 != 0)
    {
        int newLen = len + 1;

        for (int i = 0; i < newLen / 2; i++)
        {
            cout << '4';
        }

        for (int i = 0; i < newLen / 2; i++)
        {
            cout << '7';
        }
        return 0;
    }

    string s = "";
    for (int i = 0; i < len / 2; i++)
    {
        s += '4';
    }
    for (int i = 0; i < len / 2; i++)
    {
        s += '7';
    }

    do
    {
        if (s >= n)
        {
            cout << s;
            return 0;
        }
    } while (next_permutation(s.begin(), s.end()));

    int newLen = len + 2;
    for (int i = 0; i < newLen / 2; i++)
    {
        cout << '4';
    }
    for (int i = 0; i < newLen / 2; i++)
    {
        cout << '7';
    }
}