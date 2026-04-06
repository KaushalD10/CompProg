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
    vector<int> v;
    for (int i = 0; i < n.length(); i++)
    {
        if (isdigit(n[i]))
        {
            v.push_back(n[i] - '0');
        }
    }

    for (int j = 0; j < v.size() - 1; j++)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            int a = v[i];
            int b = v[i + 1];
            if (a > b)
            {
                v[i] = b;
                v[i + 1] = a;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i != v.size() - 1)
        {
            cout << v[i] << "+";
        }
        else
        {
            cout << v[i];
        }
    }
}