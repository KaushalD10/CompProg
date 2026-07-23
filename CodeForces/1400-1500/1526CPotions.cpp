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
    for (auto &x : a) cin >> x;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    long long sum = 0;

    for (long long x : a) {
        sum += x;
        pq.push(x);

        if (sum < 0) {
            sum -= pq.top();
            pq.pop();
        }
    }

    cout << pq.size();

    return 0;
}