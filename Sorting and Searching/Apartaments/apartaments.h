#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

namespace apartaments {
    void solve() {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        multiset<int> sizes(b.begin(), b.end());
        int ans = 0;

        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            auto beg = sizes.lower_bound(a[i] - k);
            auto end = sizes.upper_bound(a[i] + k);

            if (beg != end) {
                ans++;
                sizes.erase(beg);
            }
        }

        cout << ans;
    }
}
