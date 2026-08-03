#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, int>> rounds(n);
    map<string, int> finalScore;

    for (int i = 0; i < n; i++) {
        cin >> rounds[i].first >> rounds[i].second;
        finalScore[rounds[i].first] += rounds[i].second;
    }

    int best = INT_MIN;

    for (auto &[name, score] : finalScore) {
        best = max(best, score);
    }

    map<string, int> currentScore;

    for (auto &[name, points] : rounds) {
        currentScore[name] += points;

        if (finalScore[name] == best && currentScore[name] >= best) {
            cout << name;
            return 0;
        }
    }
}