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
    int a = 1, b = 1, count = 0;
    cin >> a >> b;

    while (b >= a)
    {
        a *= 3;
        b *= 2;
        count++;
    }

    cout << count;
}