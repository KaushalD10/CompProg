#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum = 0;
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    long long best = sum;
    int ans = 1;

    for (int i = k; i < n; i++) {
        sum += a[i];
        sum -= a[i - k];

        if (sum < best) {
            best = sum;
            ans = i - k + 2;
        }
    }

    cout << ans;
}