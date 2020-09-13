#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

namespace movie_festival {
    void solve() {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        v.reserve(2 * n);

        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            v.emplace_back(l, 0);
            v.emplace_back(r, 1);
        }

        sort(v.begin(), v.end());
        int ans = 0;
        int cnt = 0;
        int last
        for (auto& [time, is_finish] : v) {
            if (is_finish) {
                cnt--;
            } else {
                if (cnt == 0) {
                    cnt++;
                    ans++;
                }
            }

            ans = max(ans, cnt);
        }

        cout << ans;
    }
}
