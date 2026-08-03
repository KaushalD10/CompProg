#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    unordered_set<int> used;

    for (int x : a) {
        if (x > 1 && !used.count(x - 1))
            used.insert(x - 1);
        else if (!used.count(x))
            used.insert(x);
        else
            used.insert(x + 1);
    }

    cout << used.size();
    return 0;
}