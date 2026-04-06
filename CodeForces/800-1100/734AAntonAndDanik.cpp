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

    string s;

    cin >> s;

    int a_count = 0;
    int d_count = 0;

    for (char c : s)
    {

        if (c == 'A')
        {
            a_count++;
        }
        else
        {
            d_count++;
        }
    }

    if (a_count > d_count)
    {
        cout << "Anton";
    }
    else if (a_count < d_count)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}