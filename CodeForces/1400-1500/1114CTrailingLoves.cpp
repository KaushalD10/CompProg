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

    long long n, b;
    cin >> n >> b;

    long long ans = LLONG_MAX;

    for (long long p = 2; p * p <= b; p++) {
        if (b % p == 0) {
            int exponent = 0;

            while (b % p == 0) {
                b /= p;
                exponent++;
            }

            long long count = 0;
            long long x = n;

            while (x) {
                x /= p;
                count += x;
            }

            ans = min(ans, count / exponent);
        }
    }

    if (b > 1) {
        long long count = 0;
        long long x = n;

        while (x) {
            x /= b;
            count += x;
        }

        ans = min(ans, count);
    }

    cout << ans;
}