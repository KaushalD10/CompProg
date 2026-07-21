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
    long long d;
    cin >> n >> d;

    vector<pair<long long, long long>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    int left = 0;
    long long sum = 0;
    long long ans = 0;

    for (int right = 0; right < n; right++) {
        sum += a[right].second;

        while (a[right].first - a[left].first >= d) {
            sum -= a[left].second;
            left++;
        }

        ans = max(ans, sum);
    }




    cout << ans;
}