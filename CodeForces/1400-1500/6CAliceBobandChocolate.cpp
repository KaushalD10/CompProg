#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int l = 0, r = n - 1;
    int alice = 0, bob = 0;
    long long aliceTime = 0, bobTime = 0;


    while (l <= r) {
        if (aliceTime <= bobTime) {
            aliceTime += a[l++];
            alice++;
        } else {
            bobTime += a[r--];
            bob++;
        }
    }
    

    cout << alice << " " << bob;
}