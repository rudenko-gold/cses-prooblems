#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

namespace movie_festival {
    void solve() {
        size_t n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end(), [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
            if (lhs.second == rhs.second) {
                return lhs.first > rhs.first;
            } else {
                return lhs.second < rhs.second;
            }
        });
        int last_time = 0;
        int answer = 0;

        for (size_t i = 0; i < n; ++i) {
            if (v[i].first >= last_time) {
                answer++;
                last_time = v[i].second;
            }
        }
        cout << answer;
    }
}
