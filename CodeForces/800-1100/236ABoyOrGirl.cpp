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
    set<char> distinctChars;

    for (int i = 0; i < n.length(); i++)
    {

        distinctChars.insert(n[i]);
    }

    if (distinctChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }

    else
    {
        cout << "IGNORE HIM!";
    }
}