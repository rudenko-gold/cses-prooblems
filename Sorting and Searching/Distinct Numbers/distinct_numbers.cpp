#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

namespace distinct_numbers {
    void solve() {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (i == 0 || a[i] != a[i - 1]) {
                ans++;
            }
        }

        cout << ans;
    }
}
