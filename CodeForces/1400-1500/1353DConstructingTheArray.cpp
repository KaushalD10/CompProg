#include <bits/stdc++.h>
using namespace std;

struct Seg {
    int l, r;

    int len() const {
        return r - l + 1;
    }
};

struct Cmp {
    bool operator()(const Seg& a, const Seg& b) const {
        if (a.len() != b.len()) return a.len() < b.len();
        return a.l > b.l;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        priority_queue<Seg, vector<Seg>, Cmp> pq;

        pq.push({1, n});

        for (int x = 1; x <= n; x++) {
            auto cur = pq.top();
            pq.pop();

            int l = cur.l;
            int r = cur.r;
            int mid = (l + r) / 2;

            a[mid] = x;

            if (l <= mid - 1) pq.push({l, mid - 1});
            if (mid + 1 <= r) pq.push({mid + 1, r});
        }

        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }
}