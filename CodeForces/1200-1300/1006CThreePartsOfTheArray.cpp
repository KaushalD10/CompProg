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

    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    long long leftSum = 0, rightSum = 0, ans = 0;

    while (l <= r) {
        if (leftSum <= rightSum) {
            leftSum += a[l++];
        } else {
            rightSum += a[r--];
        }

        if (leftSum == rightSum) {
            ans = leftSum;
        }
    }


    cout << ans;
}