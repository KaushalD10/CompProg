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
    int year;
    cin >> year;

    while (true)
    {
        year++;
        string s = to_string(year);
        set<char> digits;

        for (char c : s)
        {
            digits.insert(c);
        }

        if (digits.size() == 4)
        {
            cout << year;
            break;
        }
    }
}