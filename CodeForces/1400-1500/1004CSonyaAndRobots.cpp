#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    unordered_set<int> left;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        freq[a[i]]--;

        if (freq[a[i]] == 0) {
            freq.erase(a[i]);
        }

        if (!left.count(a[i])) {
            ans += freq.size();
            left.insert(a[i]);
        }
    }

    cout << ans;
}