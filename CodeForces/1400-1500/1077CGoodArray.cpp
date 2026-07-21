#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    map<long long, int> freq;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {
        freq[a[i]]--;

        long long remaining = sum - a[i];

        if (remaining % 2 == 0) {
            long long target = remaining / 2;

            if (freq[target] > 0) {
                ans.push_back(i + 1);
            }
        }

        freq[a[i]]++;
    }


    cout << ans.size() << '\n';

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}