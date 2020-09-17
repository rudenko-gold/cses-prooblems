#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

namespace sum_of_two_values {
    void solve() {
        int n, x;
        cin >> n >> x;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i + 1;
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            int need = x - a[i].first;
            auto it = lower_bound(a.begin() + i + 1, a.end(), need, [](pair<int, int>& lhs, int val) {
                return lhs.first < val;
            });

            if (it != a.end() && it->first == need) {
                cout << a[i].second << " " << it->second;
                return;
            }
        }

        cout << "IMPOSSIBLE";
    }
}
