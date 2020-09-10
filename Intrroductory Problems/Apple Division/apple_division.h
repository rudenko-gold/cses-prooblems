#include <iostream>
#include <vector>

using namespace std;

namespace apple_division {
    void solve() {
        long long ans = numeric_limits<long long>::max();
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int mask = 0; mask < (1 << n); mask++) {
            long long sum_a = 0, sum_b = 0;

            for (int i = 0; i < n; i++) {
                if (((1 << i) & mask)) {
                    sum_a += a[i];
                } else {
                    sum_b += a[i];
                }
            }
            ans = min(ans, abs(sum_a - sum_b));
        }

        cout << ans;
    }
}
